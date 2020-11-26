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
        char* elementName = argv[1];
        char* extractDir = argv[2];
        printf("KONKANTEZER Version: %i.%i\n", Konkantezer_VERSION_MAJOR, Konkantezer_VERSION_MINOR);
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
                strncpy(slashEndingElementName, elementName, (elementNameLength + 1));
                slashEndingElementName[elementNameLength] = '/';
                slashEndingElementName[elementNameLength + 1] = '\0';
            }
            else strncpy(slashEndingElementName, elementName, (elementNameLength + 2));

            unsigned int extractDirNameLength = strlen(extractDir);
            char* slashEndingExtractDirName = malloc(extractDirNameLength + 2);
            if (extractDir[extractDirNameLength - 1] != '\\' && extractDir[extractDirNameLength - 1] != '/')
            {
                strncpy(slashEndingExtractDirName, extractDir, (extractDirNameLength + 1));
                slashEndingExtractDirName[extractDirNameLength] = '/';
                slashEndingExtractDirName[extractDirNameLength + 1] = '\0';
            }
            else strncpy(slashEndingExtractDirName, extractDir, (extractDirNameLength + 2));
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
                strncpy(slashEndingExtractDirName, extractDir, (extractDirNameLength + 1));
                slashEndingExtractDirName[extractDirNameLength] = '/';
                slashEndingExtractDirName[extractDirNameLength + 1] = '\0';
            }
            else strncpy(slashEndingExtractDirName, extractDir, (extractDirNameLength + 2));
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