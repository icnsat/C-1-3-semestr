#include <iostream>
using namespace std;
#include "ATD_2.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    vector <string> words;
    string str_old, str_new;
    int size = 0;
    while (1)
    {
        cout << "\n\nМеню\n";
        cout << "1. Ввести предложение\n";
        cout << "2. Заменить все числа в диапазоне [-100; 100] на *\n";
        cout << "3. Вывести предложение\n";
        cout << "4. Завершить работу\n";
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        cin.get();
        switch (num)
        {
        case 1:
            cout << "Введите текст:\n";
            getline(cin, str_old);
            break;
        case 2:
            if (!str_old.empty())
            {
                str_new = str_old;
                words = createVectorOfNumbers(str_new);
                for (int i = 0; i < words.size(); i++)
                {
                    string_Replace(str_new, words[i]);
                }
            }
            else
                cout << "\nПредложение не введено";
            break;
        case 3:
            if (!str_new.empty())
                cout << "\nИзмененное предложение: " << str_new;
            else if (!str_old.empty())
                cout << "\nВведенное предложение: " << str_old;
            else
                cout << "\nПредложение не введено";
            break;
        case 4:
            exit(1);
        default:
            cout << "\nНет такой операции";
        }
    }
}