#ifndef src_h
#define src_h

#include <stdio.h>
#include <stdint.h>
#include <sys/stat.h>

// File generated automatically by KONKANTEZER
void makeDirsrc()
{
	printf("Creating ./...\n");
	mkdir("./");
	printf("Created ./ !\n");
	printf("Creating ./src/...\n");
	mkdir("./src/");
	printf("Created ./src/ !\n");
}

extern void extractsrcCMakeListstxt();
extern void extractsrcDirScanUtilc();
extern void extractsrcDirScanUtilh();
extern void extractsrcKKTZ_256bmp();
extern void extractsrcKKTZ_256ico();
extern void extractsrcKonkantezerc();
extern void extractsrcKonkantezerh();
extern void extractsrcKonkantezerrc();
extern void extractsrcKonkantezerVersionh();
extern void extractsrcKonkantezerVersionhin();
extern void extractsrcmainc();

void extractsrc()
{
	extractsrcCMakeListstxt();
	extractsrcDirScanUtilc();
	extractsrcDirScanUtilh();
	extractsrcKKTZ_256bmp();
	extractsrcKKTZ_256ico();
	extractsrcKonkantezerc();
	extractsrcKonkantezerh();
	extractsrcKonkantezerrc();
	extractsrcKonkantezerVersionh();
	extractsrcKonkantezerVersionhin();
	extractsrcmainc();
}

#endif /* src_h */