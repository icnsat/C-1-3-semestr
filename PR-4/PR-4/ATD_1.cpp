#include "ATD_1.h"
#include <iostream>
using namespace std;

void string_replace(char* source, char* str_new, int with) 
{ 
	char substring[10] = {}; 
	_itoa(with, substring, 10); 
	char* substring_source = strstr(source, substring); 
	strncpy(str_new + strlen(str_new), source, strlen(source) - strlen(substring_source));
	str_new[1023] = 0; 
	strcat(str_new, "*"); 
	strcpy(source, source + strlen(source) - strlen(substring_source) + strlen(substring)); 
} 


int* createArrayofNumbers(char* str, int& n)
{
	char s2[] = " ,"; 
	char s1[1024] = {};
	strcpy(s1, str);
	char* s = strtok(s1, s2);
	int* words = NULL;
	char* ss = NULL;
	int value;
	n = 0;
	while (s != NULL)
	{
		value = (int)strtod(s, &ss);
		if (!(strcmp(ss, "")) && value >= -100 && value <= 100)
		{
			if (n == 0)
			{
				if ((words = (int*)malloc(sizeof(int))) != NULL)
					words[n] = value;
			}
			else
			{
				if ((words = (int*)realloc(words, (n + 1) * sizeof(int))) != NULL)
					words[n] = value;
			}
			n++;
		}
		s = strtok(NULL, s2);
	}
	return words;
}