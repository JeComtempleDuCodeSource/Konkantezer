#ifndef KONKANTEZER_H
#define KONKANTEZER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <libgen.h>

#include "DirScanUtil.h"

// "100 MiB"
#define OBJECT_BLOCK_SIZE 104858000

// Get file size of a already opened file
unsigned int getOpenedFileSize(FILE* File);

// Return C valid variable name
char* getVarBaseName(const char* filePath);

// Gives output file name without prefix
char* getOutputFileNameNoBasename(const char* filePath, const char* Prefix, const char* Suffix);

// Gives output file name with prefix
char* getOutputFileName(
    const char* filePath, 
    const char* dirBaseName, 
    const char* Prefix, 
    const char* Suffix);

// Write file
void writeArray(
    FILE* inputFile, 
    FILE* outputFile, 
    const char* inputFileName, 
    const char* Prefix, 
    const char* variableBaseName, 
    unsigned int fileSize);

// Write extractor
void writeExtractor(
    FILE* outputFile, 
    const char* inputFileName, 
    const char* variableBaseName, 
    unsigned int fileSize);

// Single file
void konkantezerSingle(const char* inputFileName, const char* Prefix);

// Multiple files
void Konkantezer(const char* inputFileName, const char* baseName, const char* Prefix);

// Directory maker
void writeDirMaker(
    FILE* outputFile, 
    const char* variableBaseName, 
    char** dirList, 
    const char* Prefix, 
    unsigned int directoryCount);

// Wrapper for batch konkantezer
void dirKonkantezer(const char* dirName, const char* Prefix);

#endif /* KONKANTEZER_H */