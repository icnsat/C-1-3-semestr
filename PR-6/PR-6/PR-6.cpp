#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

bool is_palindrome(int i, int j, string str);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	cout << "Введите текст:\n";
	getline(cin, str);
	while (str.find_first_of(" `~!\"\';:?()-<>.,") != string::npos)
		str.erase(str.find_first_of(" `~!\"\';:?()-<>.,"), 1);
	if (is_palindrome(0, str.length() - 1, str) == 1)
		cout << "\nВведенный текст является палиндромом";
	else
		cout << "\nВведенный текст не является палиндромом";
}

bool is_palindrome(int i, int j, string str)
{
	if (i >= j)
		return true;
	if (str[i] == str[j])
		return is_palindrome(i + 1, j - 1, str);
	return false;
}


