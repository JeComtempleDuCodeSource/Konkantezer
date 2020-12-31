#include "Konkantezer.h"

char* stripByteFromString(char* String, char toRemove)
{ 
    unsigned int stringLength = strlen(String);
    unsigned int Occurencies = 0;
    for (unsigned int Index = 0; Index < stringLength; Index++) 
        if (String[Index] == toRemove)
            Occurencies++;

    char* returnString = malloc((stringLength - Occurencies) + 1);

    unsigned int newIndex = 0;
    for (unsigned int Index = 0; Index < stringLength; Index++) 
        if (String[Index] != toRemove)
            returnString[newIndex++] = String[Index];
    returnString[newIndex] = '\0'; 
    return returnString;
} 

unsigned int getOpenedFileSize(FILE* File)
{
    unsigned int originalPosition = ftell(File);
    fseek(File, 0L, SEEK_END);
    unsigned int fileSize = ftell(File);
    fseek(File, originalPosition, SEEK_SET);
    return fileSize;
}

char* getVarBaseName(char* filePath)
{
    unsigned int Occurencies = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] >= 0x30 && filePath[Index] <= 0x39) ||
            (filePath[Index] >= 0x41 && filePath[Index] <= 0x5A) ||
            (filePath[Index] >= 0x61 && filePath[Index] <= 0x7A) ||
            (filePath[Index] == '_'))
        {
            ;
        }
        else 
        {
            Occurencies++;
        }
    }
    char* varName = malloc((strlen(filePath) - Occurencies) + 1);
    unsigned int newIndex = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] >= 0x30 && filePath[Index] <= 0x39) ||
            (filePath[Index] >= 0x41 && filePath[Index] <= 0x5A) ||
            (filePath[Index] >= 0x61 && filePath[Index] <= 0x7A) ||
            (filePath[Index] == '_'))
        {
            varName[newIndex] = filePath[Index];
            newIndex++;
        }
    }
    varName[newIndex] = 0x00;
    if (isdigit(varName[0]) != 0)
    {
        char* varName0 = malloc(strlen(varName) + 4);
        sprintf(varName0, "Var%s", varName);
        free(varName);
        return varName0;
    }
    return varName;
}

char* getOutputFileNameNoBasename(char* filePath, char* Prefix, char* Suffix)
{
    unsigned int Occurencies = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] == '/')  || (filePath[Index] == ':') ||
            (filePath[Index] == '\\') || (filePath[Index] == '*') ||
            (filePath[Index] == '<')  || (filePath[Index] == '?') ||
            (filePath[Index] == '>')  || (filePath[Index] == '\"') ||
            (filePath[Index] == '|')  || (filePath[Index] == '.'))
        {
            Occurencies++;
        }
    }
    unsigned int outputFileNameSize = strlen(filePath) - Occurencies;
    char* outputFileName = malloc(outputFileNameSize + 1);
    unsigned int newIndex = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] != '/')  && (filePath[Index] != ':') &&
            (filePath[Index] != '\\') && (filePath[Index] != '*') &&
            (filePath[Index] != '<')  && (filePath[Index] != '?') &&
            (filePath[Index] != '>')  && (filePath[Index] != '\"') &&
            (filePath[Index] != '|')  && (filePath[Index] != '.'))
        {
            outputFileName[newIndex] = filePath[Index];
            newIndex++;
        }
    }
    outputFileName[newIndex] = 0x00;
    char* outputFileName0 = malloc(strlen(outputFileName) + strlen(Prefix) + strlen(Suffix) + 1);
    sprintf(outputFileName0, "%s%s%s", Prefix, outputFileName, Suffix);
    free(outputFileName);
    return outputFileName0;
}

char* getOutputFileName(char* filePath, char* dirBaseName, char* Prefix, char* Suffix)
{
    unsigned int Occurencies = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] == '/')  || (filePath[Index] == ':') ||
            (filePath[Index] == '\\') || (filePath[Index] == '*') ||
            (filePath[Index] == '<')  || (filePath[Index] == '?') ||
            (filePath[Index] == '>')  || (filePath[Index] == '\"') ||
            (filePath[Index] == '|')  || (filePath[Index] == '.'))
        {
            Occurencies++;
        }
    }
    unsigned int outputFileNameSize = strlen(filePath) - Occurencies;
    char* outputFileName = malloc(outputFileNameSize + 1);
    unsigned int newIndex = 0;
    for (unsigned int Index = 0; Index < strlen(filePath); Index++)
    {
        if ((filePath[Index] != '/')  && (filePath[Index] != ':') &&
            (filePath[Index] != '\\') && (filePath[Index] != '*') &&
            (filePath[Index] != '<')  && (filePath[Index] != '?') &&
            (filePath[Index] != '>')  && (filePath[Index] != '\"') &&
            (filePath[Index] != '|')  && (filePath[Index] != '.'))
        {
            outputFileName[newIndex] = filePath[Index];
            newIndex++;
        }
    }
    outputFileName[newIndex] = 0x00;
    char* outputFileName0 = malloc(strlen(outputFileName) + strlen(dirBaseName) + strlen(Prefix) + strlen(Suffix) + 2);
    sprintf(outputFileName0, "%s%s/%s%s", Prefix, dirBaseName, outputFileName, Suffix);
    free(outputFileName);
    return outputFileName0;
}

void writeArray(FILE* inputFile, FILE* outputFile, char* inputFileName, char* Prefix, char* variableBaseName, unsigned int fileSize)
{
    fprintf(outputFile, "static const char %sName[] = \"%s%s\";\n", variableBaseName, Prefix, inputFileName);
    fprintf(outputFile, "static const unsigned int %sSize = %i;\n", variableBaseName, fileSize);
    fprintf(outputFile, "static const uint8_t %s[] = \n{\n\t", variableBaseName);
    unsigned int byteCount = 0;

    // Byte to Array
    while(!feof(inputFile)) 
    {
        unsigned char currentByte;
        if(fread(&currentByte, 1, 1, inputFile) == 0) 
            break;
        if (ftell(inputFile) == fileSize)
        {
            fprintf(outputFile, "0x%.2X\n", (int)currentByte);
            break;
        }
        fprintf(outputFile, "0x%.2X, ", (int)currentByte);
        ++byteCount;
        if(byteCount % 10 == 0) 
            fprintf(outputFile, "\n\t");
    }

    // End
    fprintf(outputFile, "};\n\n");
}

void writeXTFunction(FILE* outputFile, char* inputFileName, char* variableBaseName, unsigned int fileSize)
{
    fprintf(outputFile, "void extract%s()\n{\n", variableBaseName);
    fprintf(outputFile, "\tprintf(\"Extracting %%s...\\n\", %sName);\n", variableBaseName);
    fprintf(outputFile, "\tFILE* file%s = fopen(%sName, \"wb+\");\n", variableBaseName, variableBaseName);
    fprintf(outputFile, "\tfwrite(%s, %sSize, sizeof(char), file%s);\n", variableBaseName, variableBaseName, variableBaseName);
    fprintf(outputFile, "\tfclose(file%s);\n", variableBaseName);
    fprintf(outputFile, "\tprintf(\"Extracted %%s successfully\\n\", %sName);\n", variableBaseName);
    fprintf(outputFile, "}\n\n");
}

void writeMDFunction(FILE* outputFile, char* variableBaseName, char** dirList, char* Prefix, unsigned int directoryCount)
{
    fprintf(outputFile, "void makeDir%s()\n{\n", variableBaseName);

    printf("Embedding %s...\n", Prefix);
    fprintf(outputFile, "\tprintf(\"Creating %s...\\n\");\n", Prefix);
#ifdef _WIN32
    fprintf(outputFile, "\tmkdir(\"%s\");\n", Prefix);
#elif __linux__
    fprintf(outputFile, "\tmkdir(\"%s\", 0700);\n", Prefix);
#endif
    fprintf(outputFile, "\tprintf(\"Created %s !\\n\");\n", Prefix);
    printf("Embedded %s successfully!\n", Prefix);

    for (unsigned int Index = 0; Index < directoryCount; Index++)
    {
        printf("Embedding %s...\n", dirList[Index]);
        fprintf(outputFile, "\tprintf(\"Creating %s%s...\\n\");\n", Prefix, dirList[Index]);
#ifdef _WIN32
    fprintf(outputFile, "\tmkdir(\"%s%s\");\n", Prefix, dirList[Index]);
#elif __linux__
    fprintf(outputFile, "\tmkdir(\"%s%s\", 0700);\n", Prefix, dirList[Index]);
#endif
        fprintf(outputFile, "\tprintf(\"Created %s%s !\\n\");\n", Prefix, dirList[Index]);
        printf("Embedded %s successfully!\n", dirList[Index]);
    }
    fprintf(outputFile, "}\n\n");
}

void konkantezerSingle(char* inputFileName, char* Prefix)
{
    printf("Konkantezing %s...\n", inputFileName);
    char* variableBaseName = getVarBaseName(inputFileName);
    char* outputFileName = getOutputFileNameNoBasename(inputFileName, "./", ".h");

    // Open
    FILE* inputFile = fopen(inputFileName, "rb");
    FILE* outputFile = fopen(outputFileName, "wb+");

    if (inputFile == NULL)
    {
        char* errorMessage = malloc(strlen(inputFileName) + 21);
        sprintf(errorMessage, "File %s doesn't exist\n", inputFileName);
        perror(errorMessage);
        exit(1);
    }

    // Get file size
    unsigned int fileSize = getOpenedFileSize(inputFile);

    // Includes and declarartions
    fprintf(outputFile, "#pragma once\n#ifndef %s_h\n#define %s_h\n\n#include <stdio.h>\n#include <stdint.h>\n#include <sys/stat.h>\n\n", variableBaseName, variableBaseName);
    
    // Write help
    fprintf(outputFile, "// File generated automatically by KONKANTEZER\n");

    // Write array
    writeArray(inputFile, outputFile, inputFileName, Prefix, variableBaseName, fileSize);    

    // Write directory maker
    unsigned int subDirectoryCount = 0;
    for (unsigned int Index = 0; Index < strlen(Prefix); Index++)
    {
        if (Prefix[Index] == '/' || Prefix[Index] == '\\')
            subDirectoryCount++;
    }
    char** dirList = malloc(subDirectoryCount * sizeof(char*));
    unsigned int dirCount = 0;
    for (unsigned int Index = 0; Index < strlen(Prefix); Index++)
    {
        if (Prefix[Index] == '/' || Prefix[Index] == '\\')
        {
            dirList[dirCount] = malloc(Index + 1);
            strncpy(dirList[dirCount], Prefix, Index);
            dirList[dirCount][Index] = 0x00;
            dirCount++;
        }
    }
    writeMDFunction(outputFile, variableBaseName, dirList, "./", subDirectoryCount);

    // Write extract function
    writeXTFunction(outputFile, inputFileName, variableBaseName, fileSize);

    // Endif
    fprintf(outputFile, "#endif /* %s_h */", variableBaseName);

    printf("Konkantezed %s...\n", inputFileName);

    free(outputFileName);
    free(variableBaseName);
    fclose(inputFile);
    fclose(outputFile);
}

void Konkantezer(char* inputFileName, char* baseName, char* Prefix)
{
    char* variableBaseName = getVarBaseName(inputFileName);
    char* outputFileName = getOutputFileName(inputFileName, baseName, "./Out_", ".h");

    // Open
    FILE* inputFile = fopen(inputFileName, "rb");
    FILE* outputFile = fopen(outputFileName, "wb+");

    if (inputFile == NULL)
    {
        char* errorMessage = malloc(strlen(inputFileName) + 21);
        sprintf(errorMessage, "File %s doesn't exist\n", inputFileName);
        perror(errorMessage);
        exit(1);
    }
    
    // Get file size
    unsigned int fileSize = getOpenedFileSize(inputFile);

    // Includes and declarartions
    fprintf(outputFile, "#pragma once\n#ifndef %s_h\n#define %s_h\n\n#include <stdio.h>\n#include <stdint.h>\n\n", variableBaseName, variableBaseName);
    
    // Write help
    fprintf(outputFile, "// File generated automatically by KONKANTEZER\n");

    // Write array
    writeArray(inputFile, outputFile, inputFileName, Prefix, variableBaseName, fileSize);    

    // Write extract function
    writeXTFunction(outputFile, inputFileName, variableBaseName, fileSize);

    // Endif
    fprintf(outputFile, "#endif /* %s_h */", variableBaseName);

    free(outputFileName);
    free(variableBaseName);
    fclose(inputFile);
    fclose(outputFile);
}

void dirKonkantezer(char* dirName, char* Prefix)
{
    // I: Konkantetize all the files
    // Setting up names and output directory
    char* variableBaseName = getVarBaseName(dirName);
    char* outDirName = malloc(strlen(variableBaseName) + 7);
    sprintf(outDirName, "./Out_%s", variableBaseName);
#ifdef _WIN32
    mkdir(outDirName);
#elif __linux__
    mkdir(outDirName, 0700);
#endif
    printf("Converting all files from %s to %s...\n", dirName, outDirName);

    // Get files
    unsigned int fileCount = 0;
    char** fileList = getAllFilePaths(dirName, &fileCount);

    // Write files
    for (unsigned int Index = 0; Index < fileCount; Index++)
    {
        printf("Packing %s...\n", fileList[Index]);
        Konkantezer(fileList[Index], variableBaseName, Prefix);
        printf("Packed %s successfully!\n", fileList[Index]);
    }

    // II: Create dir maker

    // Get directories
    unsigned int directoryCount = 0;
    char** dirList = getAllDirectoryPaths(dirName, &directoryCount);

    // Setup main header name
    char* outputFileNameInterim = getOutputFileName(dirName, variableBaseName, "./Out_", "main.h");
    char* outputFileName = malloc(strlen(outputFileNameInterim) + 1);
    strcpy(outputFileName, outputFileNameInterim);

    // Extractor main
    char* XTFileName = malloc(strlen(variableBaseName) + strlen(basename(outputFileName)) + 10);
    sprintf(XTFileName, "./Out_%s/XT%s", variableBaseName, basename(outputFileName));
    XTFileName[strlen(XTFileName) - 1] = 'c';
    FILE* XTFile = fopen(XTFileName, "wb+");
    fprintf(XTFile, "#include \"%s\"\n\n", basename(outputFileName));

    // Write help
    fprintf(XTFile, "// File generated automatically by KONKANTEZER\n");


    // Call functions
    fprintf(XTFile, "int main()\n{\n\tmakeDir%s();\n\textract%s();\n\tprintf(\"Press any key to exit...\");\n\tgetchar();\n\treturn 0;\n}", variableBaseName, variableBaseName);  
    fclose(XTFile);

    // III: Create main extractor
    FILE* outputFile = fopen(outputFileName, "wb+");

    // Includes and declarartions
    fprintf(outputFile, "#pragma once\n#ifndef %s_h\n#define %s_h\n\n#include <stdio.h>\n#include <stdint.h>\n#include <sys/stat.h>\n\n", variableBaseName, variableBaseName);

    // Write help
    fprintf(outputFile, "// File generated automatically by KONKANTEZER\n");

    // Write directory maker
    printf("Writing directory maker function...\n");
    writeMDFunction(outputFile, variableBaseName, dirList, Prefix, directoryCount);
    printf("Wrote directory maker function successfully!\n");
    
    // Write file declares
    printf("Declaring sub-extractors...\n");
    for (unsigned int Index = 0; Index < fileCount; Index++)
    {
        char* currentVarBaseName = getVarBaseName(fileList[Index]);
        fprintf(outputFile, "extern void extract%s();\n", currentVarBaseName);
        free(currentVarBaseName);
    }
    printf("Declared sub-extractors succesfully!\n");

    // Write extract function
    printf("Writing file extractor function...\n");
    fprintf(outputFile, "\nvoid extract%s()\n{\n", variableBaseName);
    for (unsigned int Index = 0; Index < fileCount; Index++)
    {
        FILE* currentFile = fopen(fileList[Index], "rb");
        char* currentVarBaseName = getVarBaseName(fileList[Index]);
        fprintf(outputFile, "\textract%s();\n", currentVarBaseName);
        free(currentVarBaseName);
        fclose(currentFile);
    }
    fprintf(outputFile, "}\n\n");
    printf("Wrote file extractor function successfully!\n");

    // Endif
    fprintf(outputFile, "#endif /* %s_h */", variableBaseName);

    // IV: Create sub-includers

    // Write file includes
    unsigned int XTFileCount = 1;
    unsigned int totalIncludedSize = 0;
    for (unsigned int Index = 0; Index < fileCount; Index++)
    {
        // Get file to write to
        char* currentXTFileName = malloc(strlen(outDirName) + 3 + strlen(variableBaseName) + 6);
        if (XTFileCount < 10)
            sprintf(currentXTFileName, "%s/XT%s_0%i.c", outDirName, variableBaseName, XTFileCount);
        else if (XTFileCount >= 10)
            sprintf(currentXTFileName, "%s/XT%s_%i.c", outDirName, variableBaseName, XTFileCount);
        FILE* currentXTFile = fopen(currentXTFileName, "a+");

        // Include
        printf("Including %s...\n", fileList[Index]);
        char* currentHeaderFileName = getOutputFileName(fileList[Index], variableBaseName, "./Out_", ".h");
        fprintf(currentXTFile, "#include \"%s\"\n", basename(currentHeaderFileName));
        printf("Included %s successfully!\n", fileList[Index]);
        totalIncludedSize += getFileSize(fileList[Index]);
        if ((Index + 1) < fileCount)
        {
            if ((totalIncludedSize + getFileSize(fileList[Index + 1])) >= OBJECT_BLOCK_SIZE)
            {
                totalIncludedSize = 0;
                XTFileCount++;
            }
        }
        free(currentHeaderFileName);
        free(currentXTFileName);
        fclose(currentXTFile);
    }

    printf("Successful conversion from %s to %s...\n", dirName, outDirName);

    // Close
    free(XTFileName);
    fclose(outputFile);
    free(outputFileName);
    free(outputFileNameInterim);
    free(variableBaseName);
    for (unsigned int Index = 0; Index < fileCount; Index++)
    {
        free(fileList[Index]);
    }
    free(fileList);
    for (unsigned int Index = 0; Index < directoryCount; Index++)
    {
        free(dirList[Index]);
    }
    free(dirList);
    free(outDirName);
}