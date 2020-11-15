#pragma once
#ifndef Konkantezer_h
#define Konkantezer_h

#include <stdio.h>
#include <stdint.h>
#include <sys/stat.h>

void makeDirKonkantezer()
{
	printf("Creating ./...\n");
	mkdir("./");
	printf("Created ./ !\n");
	printf("Creating ././Konkantezer/...\n");
	mkdir("././Konkantezer/");
	printf("Created ././Konkantezer/ !\n");
	printf("Creating ././Konkantezer/Source...\n");
	mkdir("././Konkantezer/Source");
	printf("Created ././Konkantezer/Source !\n");
}

extern void extractKonkantezerautobuildgccsh();
extern void extractKonkantezerautobuildmingwcmd();
extern void extractKonkantezerLICENSEmd();
extern void extractKonkantezerREADMEmd();
extern void extractKonkantezerSourceCMakehin();
extern void extractKonkantezerSourceCMakeListstxt();
extern void extractKonkantezerSourcedirectScanUtilc();
extern void extractKonkantezerSourcedirectScanUtilh();
extern void extractKonkantezerSourceKonkantezerc();
extern void extractKonkantezerSourceKonkantezerh();
extern void extractKonkantezerSourcemainc();

void extractKonkantezer()
{
	extractKonkantezerautobuildgccsh();
	extractKonkantezerautobuildmingwcmd();
	extractKonkantezerLICENSEmd();
	extractKonkantezerREADMEmd();
	extractKonkantezerSourceCMakehin();
	extractKonkantezerSourceCMakeListstxt();
	extractKonkantezerSourcedirectScanUtilc();
	extractKonkantezerSourcedirectScanUtilh();
	extractKonkantezerSourceKonkantezerc();
	extractKonkantezerSourceKonkantezerh();
	extractKonkantezerSourcemainc();
}

#endif /* Konkantezer_h */