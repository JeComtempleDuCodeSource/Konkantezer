#include <CMake.h>

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
        if (isDirectory(elementName))
        {
            // Add / at end of directory name if there isn't
            unsigned int dirNameLength = strlen(elementName);
            if (elementName[dirNameLength - 1] != '\\' || elementName[dirNameLength - 1] != '/')
            {
                elementName = realloc(elementName, strlen(elementName) + 2);
                elementName[dirNameLength] = '/';
                elementName[dirNameLength + 1] = 0x00;
            }
            dirKonkantezer(elementName, extractDir);
        }
        else if (isRegularFile(elementName))
        {
            unsigned int extractDirLength = strlen(extractDir);
            if (extractDir[extractDirLength - 1] != '\\' || extractDir[extractDirLength - 1] != '/')
            {
                extractDir = realloc(extractDir, strlen(extractDir) + 2);
                extractDir[extractDirLength] = '/';
                extractDir[extractDirLength + 1] = 0x00;
            }
            konkantezerSingle(elementName, extractDir);
        }
        else 
        {
            perror("%s is not valid path.\n", elementName);
        }
        free(elementName);
        free(extractDir);
    }
    return 0;
}