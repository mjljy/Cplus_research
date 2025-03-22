#pragma once
#include <stdio.h>

//extern FILE* logfile;
//#define FILE* logfile;
#define LOG(format, ...) fprintf(logfile, format, __VA_ARGS__); printf(format, __VA_ARGS__); fflush(logfile);

//#define LOG(level, format, ...) do {  fprintf(stderr, "[%s|%s@%s,%d] " format "/n", __func__, __FILE__, __LINE__, ##__VA_ARGS__); } while (0)