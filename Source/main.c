#include <CMake.h>
#include <time.h>
#include "Konkantezer.h"

int main(int argc, char* argv[]) 
{
    if (argc != 3)
    {
        printf("KONKANTEZER Version: %i.%i\n", Konkantezer_VERSION_MAJOR, Konkantezer_VERSION_MINOR);
        printf("Report issues at \"https://github.com/JeComtempleDuCodeSource/Kokankantezer\"\n");
        printf("Usage:\n\t%s [FILE_PATH|DIRECTORY_PATH] [EXTRACT_DIR]\n", argv[0]);
        printf("\tFILE_PATH: outputs a .h file\n");
        printf("\tDIRECTORY_PATH: outputs .h file of all file in the specified directory and .c file that includes .h files\n");
        printf("\tEXTRACT_DIR: output directory when extracted enter ./ to default.\n");
        return 1;
    }
    else
    {
        char* elementName = malloc(strlen(argv[1]) + 1);
        char* extractDir = malloc(strlen(argv[2]) + 1);
        strcpy(elementName, argv[1]);
        strcpy(extractDir, argv[2]);
        printf("KONKANTEZER Version: %i.%i.%i\n", Konkantezer_VERSION_MAJOR, Konkantezer_VERSION_MINOR, Konkantezer_VERSION_PATCH);
        printf("Report issues at \"https://github.com/JeComtempleDuCodeSource/Konkantezer\"\n");
        printf("Ensure that %s is a valid path!\n", extractDir);

        clock_t Start, End;
        float elapsedSeconds;
        Start = clock();
        if (isDirectory(elementName))
        {
            // Add / at end of directory name if there isn't
            unsigned int elementNameLength = strlen(elementName);
            char* slashEndingElementName = malloc(elementNameLength + 2);
            if (elementName[elementNameLength - 1] != '\\' && elementName[elementNameLength - 1] != '/')
            {
                strcpy(slashEndingElementName, elementName);
                slashEndingElementName[elementNameLength] = '/';
                slashEndingElementName[elementNameLength + 1] = '\0';
            }
            else strcpy(slashEndingElementName, elementName);

            unsigned int extractDirNameLength = strlen(extractDir);
            char* slashEndingExtractDirName = malloc(extractDirNameLength + 2);
            if (extractDir[extractDirNameLength - 1] != '\\' && extractDir[extractDirNameLength - 1] != '/')
            {
                strcpy(slashEndingExtractDirName, extractDir);
                slashEndingExtractDirName[extractDirNameLength] = '/';
                slashEndingExtractDirName[extractDirNameLength + 1] = '\0';
            }
            else strcpy(slashEndingExtractDirName, extractDir);
            dirKonkantezer(slashEndingElementName, slashEndingExtractDirName);
            free(slashEndingElementName);
            free(slashEndingExtractDirName);
        }
        else if (isRegularFile(elementName))
        {
            unsigned int extractDirNameLength = strlen(extractDir);
            char* slashEndingExtractDirName = malloc(extractDirNameLength + 2);
            if (extractDir[extractDirNameLength - 1] != '\\' && extractDir[extractDirNameLength - 1] != '/')
            {
                strcpy(slashEndingExtractDirName, extractDir);
                slashEndingExtractDirName[extractDirNameLength] = '/';
                slashEndingExtractDirName[extractDirNameLength + 1] = '\0';
            }
            else strcpy(slashEndingExtractDirName, extractDir);
            konkantezerSingle(elementName, slashEndingExtractDirName);
            free(slashEndingExtractDirName);
        }
        else 
        {
            char* errorMessage = malloc(strlen(elementName) + 21);
            snprintf(errorMessage, (strlen(elementName) + 21), "%s is not valid path.\n", elementName);
            perror(errorMessage);
        }
        End = clock();
        elapsedSeconds = ((float)(End - Start)) / CLOCKS_PER_SEC;
        printf("Konkantization duration: %f (seconds)\n", elapsedSeconds);
        free(elementName);
        free(extractDir);
    }
    return 0;
}