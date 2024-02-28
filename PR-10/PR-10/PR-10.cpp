#include <iostream>
#include <string>
#include <cmath>
#include <regex>
using namespace std;

int hash_str(string text, int prime)
{
	int hash = 0;
	for (int i = 0; i < text.length(); i++)
	{
		hash += (int)text[i] * pow(prime, i);
	}
	return hash;
}

int Rabin_Karp(string text, string sample, int prime)
{
	int count = 0;
	int hash_sample = hash_str(sample, prime);
	for (int i = 0; i < text.length() - sample.length() + 1; i++)
	{
		int hash_text_sample = hash_str(text.substr(i, sample.length()), prime);
		if (hash_text_sample == hash_sample)
			if (text.substr(i, sample.length()) == sample)
				count++;
	}
	return count;
}


vector<string> search_email(string text)
{
	regex email_address(R"(\w+@\w+\.\w+)");
	vector<string> vec;
	smatch result;
	while (regex_search(text, result, email_address))
	{
		vec.push_back(result.str());
		text = result.suffix().str();
	}
	return vec;
}


int main()
{
	setlocale(LC_ALL, "ru");
	/*string text1, text2, sample;
	cout << "Введите первый текст: ";
	getline(cin, text1);
	cout << "Введите второй текст: ";
	getline(cin, text2);
	cout << "Введите слово из первого текста для поиска: ";
	getline(cin, sample);
	cout << "Слово \"" << sample << "\" входит в текст " << Rabin_Karp(text2, sample, 10) << " раз(а)";
	*/

	string text;
	cout << "Введите текст: ";
	getline(cin, text);

	//regex email_address(R"(\w+@\w+\.\w+)");

	vector<string> vec = search_email(text);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

}