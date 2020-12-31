#pragma once
#ifndef KONKANTEZER_H
#define KONKANTEZER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <libgen.h>

#include "directScanUtil.h"

#define OBJECT_BLOCK_SIZE 104857600

// Deletes all occurencies of a character of a string
char* stripByteFromString(char* String, char toRemove);

// Get file size of a already opened file
unsigned int getOpenedFileSize(FILE* File);

// Return C valid variable name
char* getVarBaseName(char* filePath);

// Gives output file name without prefix
char* getOutputFileNameNoBasename(char* filePath, char* Prefix, char* Suffix);

// Gives output file name with prefix
char* getOutputFileName(char* filePath, char* dirBaseName, char* Prefix, char* Suffix);

// Write file
void writeArray(FILE* inputFile, FILE* outputFile, char* inputFileName, char* Prefix, char* variableBaseName, unsigned int fileSize);

// Write extractor
void writeXTFunction(FILE* outputFile, char* inputFileName, char* variableBaseName, unsigned int fileSize);

// Single file
void konkantezerSingle(char* inputFileName, char* Prefix);

// Multiple files
void Konkantezer(char* inputFileName, char* baseName, char* Prefix);

// Directory maker
void writeMDFunction(FILE* outputFile, char* variableBaseName, char** dirList, char* Prefix, unsigned int directoryCount);

// Wrapper for batch konkantezer
void dirKonkantezer(char* dirName, char* Prefix);

#endif /* KONKANTEZER_H */