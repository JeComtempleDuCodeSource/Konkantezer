#ifndef srcKonkantezerVersionh_h
#define srcKonkantezerVersionh_h

#include <stdio.h>
#include <stdint.h>

// File generated automatically by KONKANTEZER
static const char srcKonkantezerVersionhName[] = "./src/KonkantezerVersion.h";
static const unsigned int srcKonkantezerVersionhSize = 111;
static const uint8_t srcKonkantezerVersionh[] = 
{
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 0x65, 0x20, 0x4B, 0x6F, 
	0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 
	0x56, 0x45, 0x52, 0x53, 0x49, 0x4F, 0x4E, 0x5F, 0x4D, 0x41, 
	0x4A, 0x4F, 0x52, 0x20, 0x30, 0x0D, 0x0A, 0x23, 0x64, 0x65, 
	0x66, 0x69, 0x6E, 0x65, 0x20, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 
	0x6E, 0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 0x56, 0x45, 0x52, 
	0x53, 0x49, 0x4F, 0x4E, 0x5F, 0x4D, 0x49, 0x4E, 0x4F, 0x52, 
	0x20, 0x39, 0x0D, 0x0A, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6E, 
	0x65, 0x20, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 
	0x7A, 0x65, 0x72, 0x5F, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4F, 
	0x4E, 0x5F, 0x50, 0x41, 0x54, 0x43, 0x48, 0x20, 0x31, 0x0D, 
	0x0A
};

void extractsrcKonkantezerVersionh()
{
	printf("Extracting %s...\n", srcKonkantezerVersionhName);
	FILE* filesrcKonkantezerVersionh = fopen(srcKonkantezerVersionhName, "wb+");
	fwrite(srcKonkantezerVersionh, srcKonkantezerVersionhSize, sizeof(char), filesrcKonkantezerVersionh);
	fclose(filesrcKonkantezerVersionh);
	printf("Extracted %s successfully\n", srcKonkantezerVersionhName);
}

#endif /* srcKonkantezerVersionh_h */