#include "directScanUtil.h"

int isDirectory(const char* Path)
{
    struct stat pathStatus;
    stat(Path, &pathStatus);
    return S_ISDIR(pathStatus.st_mode);
}

int isRegularFile(const char* Path)
{
    struct stat pathStatus;
    stat(Path, &pathStatus);
    return S_ISREG(pathStatus.st_mode);
}

unsigned int getFileSize(char* fileName)
{
    FILE* File = fopen(fileName, "rb");
    fseek(File, 0L, SEEK_END);
    unsigned int fileSize = ftell(File);
    fclose(File);
    return fileSize;
}

void printScanDirectory(char* Path)
{
    DIR* Directory;
    struct dirent* Entries;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isRegularFile(fullPath))
                {
                    printf("<FILE>: %s\n", fullPath);
                }
                else if (isDirectory(fullPath))
                {
                    printf("<DIR> : %s\n", fullPath);
                    if (isDirectory(Path))
                    {
                        char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                        sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                        printScanDirectory(directoryPath);
                        free(directoryPath);
                    }
                }
            }
        }
        closedir(Directory);
    } 
    else 
    {
        perror("Not a directory");
    }
    free(Entries);
}

unsigned int getFileCount(char* Path)
{
    DIR* Directory;
    struct dirent* Entries;
    unsigned int elementCount = 0;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isRegularFile(fullPath))
                {
                    elementCount++;
                }
                else if (isDirectory(Path))
                {
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    elementCount += getFileCount(directoryPath);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    } 
    free(Entries);
    return elementCount;
}

void getAllFilePathRecursion(char* Path, unsigned int* fileIndex, char** fileNames)
{
    DIR* Directory;
    struct dirent* Entries;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isRegularFile(fullPath))
                {
                    (*fileIndex)++;
                    fileNames[(*fileIndex) - 1] = malloc((strlen(fullPath) * sizeof(char)) + 1);
                    strcpy(fileNames[(*fileIndex) - 1], fullPath);
                }
                else if (isDirectory(Path))
                {
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    getAllFilePathRecursion(directoryPath, fileIndex, fileNames);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    } 
    free(Entries);
}

char** getAllFilePaths(char* Path, unsigned int* fileIndex)
{
    char** fileNames = malloc(getFileCount(Path) * sizeof(char*));
    DIR* Directory;
    struct dirent* Entries;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isRegularFile(fullPath))
                {
                    (*fileIndex)++;
                    fileNames[(*fileIndex) - 1] = malloc((strlen(fullPath) * sizeof(char)) + 1);
                    strcpy(fileNames[(*fileIndex) - 1], fullPath);
                }
                else if (isDirectory(Path))
                {
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    getAllFilePathRecursion(directoryPath, fileIndex, fileNames);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    } 
    free(Entries);
    return fileNames;
}

unsigned int getDirectoryCount(char* Path, bool Recursive)
{
    DIR* Directory;
    struct dirent* Entries;
    unsigned int elementCount = 0;
    if (Recursive == false)
        elementCount = 1;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isDirectory(fullPath))
                {
                    elementCount++;
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    elementCount += getDirectoryCount(directoryPath, true);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    }
    free(Entries);
    return elementCount;
}

void getAllDirectoryPathRecursion(char* Path, unsigned int* directoryIndex, char** directoryNames)
{
    DIR* Directory;
    struct dirent* Entries;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isDirectory(fullPath))
                {
                    (*directoryIndex)++;
                    directoryNames[(*directoryIndex) - 1] = malloc((strlen(fullPath) * sizeof(char)) + 1);
                    strcpy(directoryNames[(*directoryIndex) - 1], fullPath);
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    getAllDirectoryPathRecursion(directoryPath, directoryIndex, directoryNames);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    } 
    free(Entries);
}

char** getAllDirectoryPaths(char* Path, unsigned int* directoryIndex)
{
    char** directoryNames = malloc(getDirectoryCount(Path, false) * sizeof(char*));
    directoryNames[0] = malloc(strlen(Path) + 1);
    strcpy(directoryNames[0], Path);
    (*directoryIndex)++;
    DIR* Directory;
    struct dirent* Entries;
    if ((Directory = opendir(Path)) != NULL) 
    {
        while ((Entries = readdir(Directory)) != NULL) 
        {
            if (strcmp(Entries->d_name, ".") != 0 && strcmp(Entries->d_name, "..") != 0)
            {
                char* fullPath = malloc(strlen(Path) + strlen(Entries->d_name) + 1);
                sprintf(fullPath, "%s%s", Path, Entries->d_name);
                if (isDirectory(fullPath))
                {
                    (*directoryIndex)++;
                    directoryNames[(*directoryIndex) - 1] = malloc((strlen(fullPath) * sizeof(char)) + 1);
                    strcpy(directoryNames[(*directoryIndex) - 1], fullPath);
                    char* directoryPath = malloc(strlen(Path) + strlen(Entries->d_name) + 2);
                    sprintf(directoryPath, "%s%s/", Path, Entries->d_name);
                    getAllDirectoryPathRecursion(directoryPath, directoryIndex, directoryNames);
                    free(directoryPath);
                }
                free(fullPath);
            }
        }
        closedir(Directory);
    } 
    free(Entries);
    return directoryNames;
}