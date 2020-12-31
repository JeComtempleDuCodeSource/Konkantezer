#pragma once
#ifndef srcKonkantezerrc_h
#define srcKonkantezerrc_h

#include <stdio.h>
#include <stdint.h>

// File generated automatically by KONKANTEZER
static const char srcKonkantezerrcName[] = "././src/Konkantezer.rc";
static const unsigned int srcKonkantezerrcSize = 38;
static const uint8_t srcKonkantezerrc[] = 
{
	0x6B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 
	0x72, 0x49, 0x63, 0x6F, 0x6E, 0x20, 0x49, 0x43, 0x4F, 0x4E, 
	0x20, 0x22, 0x4B, 0x4B, 0x54, 0x5A, 0x32, 0x35, 0x36, 0x78, 
	0x32, 0x35, 0x36, 0x2E, 0x69, 0x63, 0x6F, 0x22
};

void extractsrcKonkantezerrc()
{
	printf("Extracting %s...\n", srcKonkantezerrcName);
	FILE* filesrcKonkantezerrc = fopen(srcKonkantezerrcName, "wb+");
	fwrite(srcKonkantezerrc, srcKonkantezerrcSize, sizeof(char), filesrcKonkantezerrc);
	fclose(filesrcKonkantezerrc);
	printf("Extracted %s successfully\n", srcKonkantezerrcName);
}

#endif /* srcKonkantezerrc_h */