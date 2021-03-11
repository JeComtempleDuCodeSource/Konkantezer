#ifndef srcmainc_h
#define srcmainc_h

#include <stdio.h>
#include <stdint.h>

// File generated automatically by KONKANTEZER
static const char srcmaincName[] = "././src/main.c";
static const unsigned int srcmaincSize = 3108;
static const uint8_t srcmainc[] = 
{
	0x23, 0x69, 0x6E, 0x63, 0x6C, 0x75, 0x64, 0x65, 0x20, 0x3C, 
	0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 
	0x72, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x2E, 0x68, 
	0x3E, 0x0D, 0x0A, 0x23, 0x69, 0x6E, 0x63, 0x6C, 0x75, 0x64, 
	0x65, 0x20, 0x3C, 0x74, 0x69, 0x6D, 0x65, 0x2E, 0x68, 0x3E, 
	0x0D, 0x0A, 0x23, 0x69, 0x6E, 0x63, 0x6C, 0x75, 0x64, 0x65, 
	0x20, 0x22, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 
	0x7A, 0x65, 0x72, 0x2E, 0x68, 0x22, 0x0D, 0x0A, 0x0D, 0x0A, 
	0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x61, 0x64, 0x64, 0x53, 
	0x6C, 0x61, 0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 
	0x6E, 0x64, 0x28, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x69, 
	0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 0x29, 0x0D, 
	0x0A, 0x7B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6E, 
	0x73, 0x69, 0x67, 0x6E, 0x65, 0x64, 0x20, 0x69, 0x6E, 0x74, 
	0x20, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 
	0x4C, 0x65, 0x6E, 0x67, 0x74, 0x68, 0x20, 0x3D, 0x20, 0x73, 
	0x74, 0x72, 0x6C, 0x65, 0x6E, 0x28, 0x69, 0x6E, 0x70, 0x75, 
	0x74, 0x50, 0x61, 0x74, 0x68, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 
	0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x70, 
	0x61, 0x74, 0x68, 0x57, 0x69, 0x74, 0x68, 0x53, 0x6C, 0x61, 
	0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 
	0x20, 0x3D, 0x20, 0x6D, 0x61, 0x6C, 0x6C, 0x6F, 0x63, 0x28, 
	0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 0x4C, 
	0x65, 0x6E, 0x67, 0x74, 0x68, 0x20, 0x2B, 0x20, 0x32, 0x29, 
	0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 
	0x28, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 
	0x5B, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 
	0x4C, 0x65, 0x6E, 0x67, 0x74, 0x68, 0x20, 0x2D, 0x20, 0x31, 
	0x5D, 0x20, 0x21, 0x3D, 0x20, 0x27, 0x5C, 0x5C, 0x27, 0x20, 
	0x26, 0x26, 0x20, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 
	0x74, 0x68, 0x5B, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 
	0x74, 0x68, 0x4C, 0x65, 0x6E, 0x67, 0x74, 0x68, 0x20, 0x2D, 
	0x20, 0x31, 0x5D, 0x20, 0x21, 0x3D, 0x20, 0x27, 0x2F, 0x27, 
	0x29, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x7B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x74, 
	0x72, 0x63, 0x70, 0x79, 0x28, 0x70, 0x61, 0x74, 0x68, 0x57, 
	0x69, 0x74, 0x68, 0x53, 0x6C, 0x61, 0x73, 0x68, 0x41, 0x74, 
	0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 0x2C, 0x20, 0x69, 0x6E, 
	0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 0x29, 0x3B, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 
	0x61, 0x74, 0x68, 0x57, 0x69, 0x74, 0x68, 0x53, 0x6C, 0x61, 
	0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 
	0x5B, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 0x68, 
	0x4C, 0x65, 0x6E, 0x67, 0x74, 0x68, 0x5D, 0x20, 0x3D, 0x20, 
	0x27, 0x2F, 0x27, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x70, 0x61, 0x74, 0x68, 0x57, 0x69, 
	0x74, 0x68, 0x53, 0x6C, 0x61, 0x73, 0x68, 0x41, 0x74, 0x54, 
	0x68, 0x65, 0x45, 0x6E, 0x64, 0x5B, 0x69, 0x6E, 0x70, 0x75, 
	0x74, 0x50, 0x61, 0x74, 0x68, 0x4C, 0x65, 0x6E, 0x67, 0x74, 
	0x68, 0x20, 0x2B, 0x20, 0x31, 0x5D, 0x20, 0x3D, 0x20, 0x27, 
	0x5C, 0x30, 0x27, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 
	0x7D, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6C, 0x73, 
	0x65, 0x20, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x73, 0x74, 0x72, 0x63, 0x70, 0x79, 0x28, 0x70, 
	0x61, 0x74, 0x68, 0x57, 0x69, 0x74, 0x68, 0x53, 0x6C, 0x61, 
	0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 
	0x2C, 0x20, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x50, 0x61, 0x74, 
	0x68, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x72, 
	0x65, 0x74, 0x75, 0x72, 0x6E, 0x20, 0x70, 0x61, 0x74, 0x68, 
	0x57, 0x69, 0x74, 0x68, 0x53, 0x6C, 0x61, 0x73, 0x68, 0x41, 
	0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 0x3B, 0x0D, 0x0A, 
	0x7D, 0x0D, 0x0A, 0x0D, 0x0A, 0x69, 0x6E, 0x74, 0x20, 0x6D, 
	0x61, 0x69, 0x6E, 0x28, 0x69, 0x6E, 0x74, 0x20, 0x61, 0x72, 
	0x67, 0x63, 0x2C, 0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 
	0x61, 0x72, 0x67, 0x76, 0x5B, 0x5D, 0x29, 0x20, 0x0D, 0x0A, 
	0x7B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 
	0x28, 0x61, 0x72, 0x67, 0x63, 0x20, 0x21, 0x3D, 0x20, 0x33, 
	0x29, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x7B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x72, 
	0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x4B, 0x4F, 0x4E, 0x4B, 
	0x41, 0x4E, 0x54, 0x45, 0x5A, 0x45, 0x52, 0x20, 0x56, 0x65, 
	0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3A, 0x20, 0x25, 0x69, 0x2E, 
	0x25, 0x69, 0x2E, 0x25, 0x69, 0x5C, 0x6E, 0x22, 0x2C, 0x20, 
	0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 
	0x72, 0x5F, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4F, 0x4E, 0x5F, 
	0x4D, 0x41, 0x4A, 0x4F, 0x52, 0x2C, 0x20, 0x4B, 0x6F, 0x6E, 
	0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 0x56, 
	0x45, 0x52, 0x53, 0x49, 0x4F, 0x4E, 0x5F, 0x4D, 0x49, 0x4E, 
	0x4F, 0x52, 0x2C, 0x20, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 
	0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 0x56, 0x45, 0x52, 0x53, 
	0x49, 0x4F, 0x4E, 0x5F, 0x50, 0x41, 0x54, 0x43, 0x48, 0x29, 
	0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x70, 0x72, 0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x52, 
	0x65, 0x70, 0x6F, 0x72, 0x74, 0x20, 0x69, 0x73, 0x73, 0x75, 
	0x65, 0x73, 0x20, 0x61, 0x74, 0x20, 0x5C, 0x22, 0x68, 0x74, 
	0x74, 0x70, 0x73, 0x3A, 0x2F, 0x2F, 0x67, 0x69, 0x74, 0x68, 
	0x75, 0x62, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x4A, 0x65, 0x43, 
	0x6F, 0x6D, 0x74, 0x65, 0x6D, 0x70, 0x6C, 0x65, 0x44, 0x75, 
	0x43, 0x6F, 0x64, 0x65, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 
	0x2F, 0x4B, 0x6F, 0x6B, 0x61, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 
	0x65, 0x7A, 0x65, 0x72, 0x5C, 0x22, 0x5C, 0x6E, 0x22, 0x29, 
	0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x70, 0x72, 0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x55, 
	0x73, 0x61, 0x67, 0x65, 0x3A, 0x5C, 0x6E, 0x5C, 0x74, 0x25, 
	0x73, 0x20, 0x5B, 0x46, 0x49, 0x4C, 0x45, 0x5F, 0x50, 0x41, 
	0x54, 0x48, 0x7C, 0x44, 0x49, 0x52, 0x45, 0x43, 0x54, 0x4F, 
	0x52, 0x59, 0x5F, 0x50, 0x41, 0x54, 0x48, 0x5D, 0x20, 0x5B, 
	0x45, 0x58, 0x54, 0x52, 0x41, 0x43, 0x54, 0x5F, 0x44, 0x49, 
	0x52, 0x5D, 0x5C, 0x6E, 0x22, 0x2C, 0x20, 0x61, 0x72, 0x67, 
	0x76, 0x5B, 0x30, 0x5D, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x72, 0x69, 0x6E, 
	0x74, 0x66, 0x28, 0x22, 0x5C, 0x74, 0x46, 0x49, 0x4C, 0x45, 
	0x5F, 0x50, 0x41, 0x54, 0x48, 0x3A, 0x20, 0x6F, 0x75, 0x74, 
	0x70, 0x75, 0x74, 0x73, 0x20, 0x61, 0x20, 0x2E, 0x68, 0x20, 
	0x66, 0x69, 0x6C, 0x65, 0x5C, 0x6E, 0x22, 0x29, 0x3B, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 
	0x72, 0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x5C, 0x74, 0x44, 
	0x49, 0x52, 0x45, 0x43, 0x54, 0x4F, 0x52, 0x59, 0x5F, 0x50, 
	0x41, 0x54, 0x48, 0x3A, 0x20, 0x6F, 0x75, 0x74, 0x70, 0x75, 
	0x74, 0x73, 0x20, 0x2E, 0x68, 0x20, 0x66, 0x69, 0x6C, 0x65, 
	0x20, 0x6F, 0x66, 0x20, 0x61, 0x6C, 0x6C, 0x20, 0x66, 0x69, 
	0x6C, 0x65, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65, 0x20, 
	0x73, 0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x65, 0x64, 0x20, 
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x20, 
	0x61, 0x6E, 0x64, 0x20, 0x2E, 0x63, 0x20, 0x66, 0x69, 0x6C, 
	0x65, 0x20, 0x74, 0x68, 0x61, 0x74, 0x20, 0x69, 0x6E, 0x63, 
	0x6C, 0x75, 0x64, 0x65, 0x73, 0x20, 0x2E, 0x68, 0x20, 0x66, 
	0x69, 0x6C, 0x65, 0x73, 0x5C, 0x6E, 0x22, 0x29, 0x3B, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 
	0x72, 0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x5C, 0x74, 0x45, 
	0x58, 0x54, 0x52, 0x41, 0x43, 0x54, 0x5F, 0x44, 0x49, 0x52, 
	0x3A, 0x20, 0x6F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x64, 
	0x69, 0x72, 0x65, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x20, 0x77, 
	0x68, 0x65, 0x6E, 0x20, 0x65, 0x78, 0x74, 0x72, 0x61, 0x63, 
	0x74, 0x65, 0x64, 0x2C, 0x20, 0x65, 0x6E, 0x74, 0x65, 0x72, 
	0x20, 0x2E, 0x2F, 0x20, 0x74, 0x6F, 0x20, 0x64, 0x65, 0x66, 
	0x61, 0x75, 0x6C, 0x74, 0x2E, 0x5C, 0x6E, 0x22, 0x29, 0x3B, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6E, 0x20, 0x31, 0x3B, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x7D, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x65, 0x6C, 0x73, 0x65, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x7B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x65, 
	0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 0x61, 0x6D, 0x65, 
	0x20, 0x3D, 0x20, 0x6D, 0x61, 0x6C, 0x6C, 0x6F, 0x63, 0x28, 
	0x73, 0x74, 0x72, 0x6C, 0x65, 0x6E, 0x28, 0x61, 0x72, 0x67, 
	0x76, 0x5B, 0x31, 0x5D, 0x29, 0x20, 0x2B, 0x20, 0x31, 0x29, 
	0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x65, 0x78, 0x74, 
	0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 0x20, 0x3D, 0x20, 
	0x6D, 0x61, 0x6C, 0x6C, 0x6F, 0x63, 0x28, 0x73, 0x74, 0x72, 
	0x6C, 0x65, 0x6E, 0x28, 0x61, 0x72, 0x67, 0x76, 0x5B, 0x32, 
	0x5D, 0x29, 0x20, 0x2B, 0x20, 0x31, 0x29, 0x3B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x74, 
	0x72, 0x63, 0x70, 0x79, 0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 
	0x6E, 0x74, 0x4E, 0x61, 0x6D, 0x65, 0x2C, 0x20, 0x61, 0x72, 
	0x67, 0x76, 0x5B, 0x31, 0x5D, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x74, 0x72, 
	0x63, 0x70, 0x79, 0x28, 0x65, 0x78, 0x74, 0x72, 0x61, 0x63, 
	0x74, 0x44, 0x69, 0x72, 0x2C, 0x20, 0x61, 0x72, 0x67, 0x76, 
	0x5B, 0x32, 0x5D, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x72, 0x69, 0x6E, 0x74, 
	0x66, 0x28, 0x22, 0x4B, 0x4F, 0x4E, 0x4B, 0x41, 0x4E, 0x54, 
	0x45, 0x5A, 0x45, 0x52, 0x20, 0x56, 0x65, 0x72, 0x73, 0x69, 
	0x6F, 0x6E, 0x3A, 0x20, 0x25, 0x69, 0x2E, 0x25, 0x69, 0x2E, 
	0x25, 0x69, 0x5C, 0x6E, 0x22, 0x2C, 0x20, 0x4B, 0x6F, 0x6E, 
	0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 0x56, 
	0x45, 0x52, 0x53, 0x49, 0x4F, 0x4E, 0x5F, 0x4D, 0x41, 0x4A, 
	0x4F, 0x52, 0x2C, 0x20, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 
	0x74, 0x65, 0x7A, 0x65, 0x72, 0x5F, 0x56, 0x45, 0x52, 0x53, 
	0x49, 0x4F, 0x4E, 0x5F, 0x4D, 0x49, 0x4E, 0x4F, 0x52, 0x2C, 
	0x20, 0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 
	0x65, 0x72, 0x5F, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4F, 0x4E, 
	0x5F, 0x50, 0x41, 0x54, 0x43, 0x48, 0x29, 0x3B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x72, 
	0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 0x52, 0x65, 0x70, 0x6F, 
	0x72, 0x74, 0x20, 0x69, 0x73, 0x73, 0x75, 0x65, 0x73, 0x20, 
	0x61, 0x74, 0x20, 0x5C, 0x22, 0x68, 0x74, 0x74, 0x70, 0x73, 
	0x3A, 0x2F, 0x2F, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2E, 
	0x63, 0x6F, 0x6D, 0x2F, 0x4A, 0x65, 0x43, 0x6F, 0x6D, 0x74, 
	0x65, 0x6D, 0x70, 0x6C, 0x65, 0x44, 0x75, 0x43, 0x6F, 0x64, 
	0x65, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x4B, 0x6F, 
	0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 0x72, 0x5C, 
	0x22, 0x5C, 0x6E, 0x22, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x72, 0x69, 0x6E, 
	0x74, 0x66, 0x28, 0x22, 0x45, 0x6E, 0x73, 0x75, 0x72, 0x65, 
	0x20, 0x74, 0x68, 0x61, 0x74, 0x20, 0x25, 0x73, 0x20, 0x69, 
	0x73, 0x20, 0x61, 0x20, 0x76, 0x61, 0x6C, 0x69, 0x64, 0x20, 
	0x70, 0x61, 0x74, 0x68, 0x21, 0x5C, 0x6E, 0x22, 0x2C, 0x20, 
	0x65, 0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 
	0x29, 0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x63, 0x6C, 0x6F, 0x63, 0x6B, 0x5F, 
	0x74, 0x20, 0x53, 0x74, 0x61, 0x72, 0x74, 0x3B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6C, 
	0x6F, 0x63, 0x6B, 0x5F, 0x74, 0x20, 0x45, 0x6E, 0x64, 0x3B, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x66, 0x6C, 0x6F, 0x61, 0x74, 0x20, 0x65, 0x6C, 0x61, 0x70, 
	0x73, 0x65, 0x64, 0x53, 0x65, 0x63, 0x6F, 0x6E, 0x64, 0x73, 
	0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x3D, 0x20, 0x63, 
	0x6C, 0x6F, 0x63, 0x6B, 0x28, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 
	0x28, 0x69, 0x73, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x6F, 
	0x72, 0x79, 0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 
	0x4E, 0x61, 0x6D, 0x65, 0x29, 0x29, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7B, 0x0D, 0x0A, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x2F, 0x2F, 0x20, 0x41, 0x64, 0x64, 0x20, 0x2F, 0x20, 
	0x61, 0x74, 0x20, 0x65, 0x6E, 0x64, 0x20, 0x6F, 0x66, 0x20, 
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x20, 
	0x6E, 0x61, 0x6D, 0x65, 0x20, 0x69, 0x66, 0x20, 0x74, 0x68, 
	0x65, 0x72, 0x65, 0x20, 0x69, 0x73, 0x6E, 0x27, 0x74, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 0x73, 
	0x6C, 0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 0x69, 0x6E, 0x67, 
	0x45, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 0x61, 0x6D, 
	0x65, 0x20, 0x3D, 0x20, 0x61, 0x64, 0x64, 0x53, 0x6C, 0x61, 
	0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 
	0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 0x61, 
	0x6D, 0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 
	0x61, 0x72, 0x2A, 0x20, 0x73, 0x6C, 0x61, 0x73, 0x68, 0x45, 
	0x6E, 0x64, 0x69, 0x6E, 0x67, 0x45, 0x78, 0x74, 0x72, 0x61, 
	0x63, 0x74, 0x44, 0x69, 0x72, 0x4E, 0x61, 0x6D, 0x65, 0x20, 
	0x3D, 0x20, 0x61, 0x64, 0x64, 0x53, 0x6C, 0x61, 0x73, 0x68, 
	0x41, 0x74, 0x54, 0x68, 0x65, 0x45, 0x6E, 0x64, 0x28, 0x65, 
	0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 0x29, 
	0x3B, 0x0D, 0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x72, 
	0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 0x65, 
	0x72, 0x28, 0x73, 0x6C, 0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 
	0x69, 0x6E, 0x67, 0x45, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 
	0x4E, 0x61, 0x6D, 0x65, 0x2C, 0x20, 0x73, 0x6C, 0x61, 0x73, 
	0x68, 0x45, 0x6E, 0x64, 0x69, 0x6E, 0x67, 0x45, 0x78, 0x74, 
	0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 0x4E, 0x61, 0x6D, 
	0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x72, 0x65, 
	0x65, 0x28, 0x73, 0x6C, 0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 
	0x69, 0x6E, 0x67, 0x45, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 
	0x4E, 0x61, 0x6D, 0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x66, 0x72, 0x65, 0x65, 0x28, 0x73, 0x6C, 0x61, 0x73, 0x68, 
	0x45, 0x6E, 0x64, 0x69, 0x6E, 0x67, 0x45, 0x78, 0x74, 0x72, 
	0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 0x4E, 0x61, 0x6D, 0x65, 
	0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x7D, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x65, 0x6C, 0x73, 0x65, 0x20, 0x69, 0x66, 
	0x20, 0x28, 0x69, 0x73, 0x52, 0x65, 0x67, 0x75, 0x6C, 0x61, 
	0x72, 0x46, 0x69, 0x6C, 0x65, 0x28, 0x65, 0x6C, 0x65, 0x6D, 
	0x65, 0x6E, 0x74, 0x4E, 0x61, 0x6D, 0x65, 0x29, 0x29, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7B, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x72, 0x2A, 0x20, 
	0x73, 0x6C, 0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 0x69, 0x6E, 
	0x67, 0x45, 0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 
	0x72, 0x4E, 0x61, 0x6D, 0x65, 0x20, 0x3D, 0x20, 0x61, 0x64, 
	0x64, 0x53, 0x6C, 0x61, 0x73, 0x68, 0x41, 0x74, 0x54, 0x68, 
	0x65, 0x45, 0x6E, 0x64, 0x28, 0x65, 0x78, 0x74, 0x72, 0x61, 
	0x63, 0x74, 0x44, 0x69, 0x72, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x6B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x65, 0x7A, 
	0x65, 0x72, 0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x28, 0x65, 
	0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 0x61, 0x6D, 0x65, 
	0x2C, 0x20, 0x73, 0x6C, 0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 
	0x69, 0x6E, 0x67, 0x45, 0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 
	0x44, 0x69, 0x72, 0x4E, 0x61, 0x6D, 0x65, 0x29, 0x3B, 0x0D, 
	0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x66, 0x72, 0x65, 0x65, 0x28, 0x73, 0x6C, 
	0x61, 0x73, 0x68, 0x45, 0x6E, 0x64, 0x69, 0x6E, 0x67, 0x45, 
	0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 0x72, 0x4E, 
	0x61, 0x6D, 0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7D, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6C, 0x73, 0x65, 
	0x20, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x7B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x72, 
	0x2A, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x4D, 0x65, 0x73, 
	0x73, 0x61, 0x67, 0x65, 0x20, 0x3D, 0x20, 0x6D, 0x61, 0x6C, 
	0x6C, 0x6F, 0x63, 0x28, 0x73, 0x74, 0x72, 0x6C, 0x65, 0x6E, 
	0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 0x61, 
	0x6D, 0x65, 0x29, 0x20, 0x2B, 0x20, 0x32, 0x31, 0x29, 0x3B, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x73, 0x6E, 0x70, 0x72, 0x69, 0x6E, 
	0x74, 0x66, 0x28, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x4D, 0x65, 
	0x73, 0x73, 0x61, 0x67, 0x65, 0x2C, 0x20, 0x28, 0x73, 0x74, 
	0x72, 0x6C, 0x65, 0x6E, 0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 
	0x6E, 0x74, 0x4E, 0x61, 0x6D, 0x65, 0x29, 0x20, 0x2B, 0x20, 
	0x32, 0x31, 0x29, 0x2C, 0x20, 0x22, 0x25, 0x73, 0x20, 0x69, 
	0x73, 0x20, 0x6E, 0x6F, 0x74, 0x20, 0x76, 0x61, 0x6C, 0x69, 
	0x64, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2E, 0x5C, 0x6E, 0x22, 
	0x2C, 0x20, 0x65, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x4E, 
	0x61, 0x6D, 0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 
	0x65, 0x72, 0x72, 0x6F, 0x72, 0x28, 0x65, 0x72, 0x72, 0x6F, 
	0x72, 0x4D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x29, 0x3B, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x7D, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x45, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x63, 0x6C, 0x6F, 
	0x63, 0x6B, 0x28, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6C, 0x61, 0x70, 0x73, 
	0x65, 0x64, 0x53, 0x65, 0x63, 0x6F, 0x6E, 0x64, 0x73, 0x20, 
	0x3D, 0x20, 0x28, 0x28, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x29, 
	0x28, 0x45, 0x6E, 0x64, 0x20, 0x2D, 0x20, 0x53, 0x74, 0x61, 
	0x72, 0x74, 0x29, 0x29, 0x20, 0x2F, 0x20, 0x43, 0x4C, 0x4F, 
	0x43, 0x4B, 0x53, 0x5F, 0x50, 0x45, 0x52, 0x5F, 0x53, 0x45, 
	0x43, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x70, 0x72, 0x69, 0x6E, 0x74, 0x66, 0x28, 0x22, 
	0x4B, 0x6F, 0x6E, 0x6B, 0x61, 0x6E, 0x74, 0x69, 0x7A, 0x61, 
	0x74, 0x69, 0x6F, 0x6E, 0x20, 0x64, 0x75, 0x72, 0x61, 0x74, 
	0x69, 0x6F, 0x6E, 0x3A, 0x20, 0x25, 0x66, 0x20, 0x28, 0x73, 
	0x65, 0x63, 0x6F, 0x6E, 0x64, 0x73, 0x29, 0x5C, 0x6E, 0x22, 
	0x2C, 0x20, 0x65, 0x6C, 0x61, 0x70, 0x73, 0x65, 0x64, 0x53, 
	0x65, 0x63, 0x6F, 0x6E, 0x64, 0x73, 0x29, 0x3B, 0x0D, 0x0A, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x72, 
	0x65, 0x65, 0x28, 0x65, 0x6C, 0x65, 0x6D, 0x65, 0x6E, 0x74, 
	0x4E, 0x61, 0x6D, 0x65, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x72, 0x65, 0x65, 
	0x28, 0x65, 0x78, 0x74, 0x72, 0x61, 0x63, 0x74, 0x44, 0x69, 
	0x72, 0x29, 0x3B, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x7D, 
	0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 
	0x72, 0x6E, 0x20, 0x30, 0x3B, 0x0D, 0x0A, 0x7D
};

void extractsrcmainc()
{
	printf("Extracting %s...\n", srcmaincName);
	FILE* filesrcmainc = fopen(srcmaincName, "wb+");
	fwrite(srcmainc, srcmaincSize, sizeof(char), filesrcmainc);
	fclose(filesrcmainc);
	printf("Extracted %s successfully\n", srcmaincName);
}

#endif /* srcmainc_h */