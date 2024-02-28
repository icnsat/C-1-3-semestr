#include <iostream>
#include <fstream>
#include "windows.h"
#include <chrono>
#include <vector>
#include <string>
using namespace std;

struct automobile
{
    int auto_number;
    char car_model[100];
    char owner[100];
    bool stolen;
};


int fill_rand(string file_name)
{
    srand(time(0));
    ofstream file;
    file.open(file_name);
    if (file)
    {
        int key = rand() % 100;
        file << key << endl;
        file << "Tesla" << endl;
        file << "Дмитрий Мозжухин" << endl;
        bool stolen = rand() % 2;
        file << stolen;

        string car_models[10] = { "Volvo", "Audi", "Lexus", "BMW", "Kia", "Honda", "Jeep", "Nissan", "Opel", "Suzuki" };
        string first_names[10] = { "Иван", "Аркадий", "Андрей", "Алексей", "Григорий", "Леонид", "Даниил", "Олег", "Никита", "Сергей" };
        string last_names[10] = { "Иванов", "Петров", "Воробьев", "Соловьев", "Воронов", "Малеев", "Солдатов", "Поздняков", "Генералов", "Кириллов" };

        for (int i = 0; i < 4; i++)
        {
            string first_name = first_names[i / 10];
            for (int j = 0; j < 5; j++)
            {
                string last_name = last_names[j];
                for (int k = 0; k < 5; k++)
                {
                    string car_model = car_models[k];
                    key = key + 1 + rand() % 10;
                    stolen = rand() % 2;

                    file << endl << key;
                    file << endl << car_model;
                    file << endl << first_name << " ";
                    file << last_name << endl;
                    file << stolen;
                }
            }
        }
        file.close();
        return 0;
    }
    return 1;
}
int create_bin_file(string nametf, string namebf)
{
    ifstream itf(nametf);
    if (itf)
    {
        ofstream obf(namebf, ios::out | ios::binary);
        while (!itf.eof())
        {
            automobile r;
            string auto_number, stolen;
            getline(itf, auto_number, '\n');
            r.auto_number = stoi(auto_number);
            itf.getline(r.car_model, 10, '\n');
            itf.getline(r.owner, 20, '\n');
            getline(itf, stolen, '\n');
            r.stolen = stoi(stolen);
            obf.write((char*)&r, sizeof(automobile));
        }
        itf.close();
        obf.close();
        return 0;
    }
    return 1;
}

int out_bin_file(string namebf)
{
    ifstream ibf(namebf, ios::in | ios::binary);
    if (ibf)
    {
        automobile r;
        ibf.read((char*)&r, sizeof(automobile));
        while (!ibf.eof())
        {
            cout << r.auto_number << " ";
            cout << r.car_model << " ";
            cout << r.owner << " ";
            cout << r.stolen << endl;
            ibf.read((char*)&r, sizeof(automobile));
        }
        ibf.close();
        return 0;
    }
    return 1;
}

int hash_function(int key, int size)
{
    return key % size;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*if (fill_rand("deletedelete.txt"))
    {
        cout << "Не удалось открыть текстовый файл";
        return -1;
    }
    if (create_bin_file("deletedelete.txt", "deletedelete.bin"))
    {
        cout << "Не удалось создать бинарный файл";
        return -1;
    }
    if (out_bin_file("deletedelete.bin"))
    {
        cout << "Не удалось открыть бинарный файл";
        return -1;
    }
    return 0;*/

    cout << "Введите ключ и размер таблицы: ";
    int key, size;
    cin >> key >> size;
    cout << "Вычисленный хеш: " << hash_function(key, size);
}