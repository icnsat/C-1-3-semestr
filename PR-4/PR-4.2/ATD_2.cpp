#include "ATD_2.h"
#include <iostream>
using namespace std;

void string_Replace(string& source, string substring)
{
	int position = source.find(substring);
	source.replace(position, substring.length(), "*");
}

vector<string> createVectorOfNumbers(string str)
{
	string delims(" ,");
	vector <string> words;
	int startidx = 0, endidx = 0;
	while (startidx != string::npos)
	{
	    endidx = str.find_first_of(delims, startidx);
	    string num = str.substr(startidx, endidx - startidx);
	
	    if (isdigit(num[num.length() - 1]))
	        if (stoi(num) <= 100 && stoi(num) >= -100)
	            words.push_back(num);
	
	    startidx = str.find_first_not_of(delims, endidx);
	}
	return words;
}
