#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6308)
#endif

#include <iostream>
using namespace std;
#include "string.h"
#include "ATD_1.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    int* wordsC = nullptr;
    char str_old[1024] = "", str_new[1024] = "", str_mid[1024] = "";
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
            gets_s(str_old);
            break;
        case 2:
            if (strlen(str_old) > 0)
            {
                strcpy(str_mid, str_old);
                wordsC = createArrayofNumbers(str_mid, size);
                for (int i = 0; i < size; i++)
                {
                    string_replace(str_mid, str_new, wordsC[i]);
                }
                strcat(str_new, str_mid);
            }
            else
                cout << "\nПредложение не введено";
            break;
        case 3:
            if (strlen(str_new) > 0)
                cout << "\nИзмененное предложение: " << str_new;
            else if (strlen(str_old) > 0)
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