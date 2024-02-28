#pragma once
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6308)
#endif

void string_replace(char* source, char* str_new, int with);
int* createArrayofNumbers(char* str, int& n);
