#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "windows.h"
#include <chrono>
using namespace std;

struct automobile
{
    int auto_number = 0;
    string car_model;
    string owner;
};

struct table
{
    vector <automobile> vec;
    table() {};
};

int brute_force(int key, table tab);
int barrier_search(int key, table& tab);
int fib_search(int key, table tab);



void read_file(string file_name, table& tab)
{
    ifstream file(file_name);
    while (!file.eof())
    {
        automobile am;
        string auto_number;
        getline(file, auto_number, '\n');
        am.auto_number = stoi(auto_number);
        getline(file, am.car_model, '\n');
        getline(file, am.owner, '\n');
        tab.vec.push_back(am);
    }
    file.close();
}


void fill_rand(string file_name)
{
    srand(time(0));

    ofstream file;
    file.open(file_name);

    int key = rand() % 100;
    file << key << endl;
    file << "Tesla" << endl;
    file << "Дмитрий Мозжухин";

    string car_models[10] = {"Volvo", "Audi", "Lexus", "BMW", "Kia", "Honda", "Jeep", "Nissan", "Opel", "Suzuki"};
    string first_names[10] = {"Иван", "Аркадий", "Андрей", "Алексей", "Григорий", "Леонид", "Даниил", "Олег", "Никита", "Сергей"};
    string last_names[10] = {"Иванов", "Петров", "Воробьев", "Соловьев", "Воронов", "Малеев", "Солдатов", "Поздняков", "Генералов", "Кириллов"};
    
    for (int i = 0; i < 99; i++)
    {
        string first_name = first_names[i / 10];
        for (int j = 0; j < 13; j++)
        {
            string last_name = last_names[j/2];
            for (int k = 0; k < 9; k++)
            {
                string car_model = car_models[k];
                key = key + 1 + rand() % 10;

                file << endl << key;
                file << endl << car_model;
                file << endl << first_name << " ";
                file << last_name;
            }
        }
    }
    file.close();
}

void output_table_vec(table tab)
{
    cout << setw(20) << left << "|Номер|" \
        << setw(20) << left << "|Модель|" \
        << setw(20) << left << "|Владелец|" << endl;
    for (int i = 0; i < tab.vec.size(); i++)
    {
        cout << setw(20) << tab.vec[i].auto_number \
            << setw(20) << left << tab.vec[i].car_model \
            << setw(20) << left << tab.vec[i].owner << endl;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    table automobile_owners;
    //fill_rand("Text10000.txt");


    read_file("Text10.txt", automobile_owners);

    //output_table_vec(automobile_owners);

    auto begin = std::chrono::steady_clock::now();

    cout << fib_search(1, automobile_owners);

    auto end = std::chrono::steady_clock::now();

    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout << endl << elapsed_ms.count();

    cout << "\nаурекивуреки ауреки";
}




int brute_force(int key, table tab)
{
    for (int i = 0; i < tab.vec.size(); i++)
        if (tab.vec[i].auto_number == key)
            return i;
    return -1;
}

//int search_with_barrier(int key, table tab) 
//{
//    automobile last = tab.vec[tab.vec.size() - 1];
//    tab.vec[tab.vec.size() - 1].auto_number = key;
//    int i = 0;
//    for (; tab.vec[tab.vec.size() - 1].auto_number != key; ++i) {}
//    tab.vec[tab.vec.size() - 1] = last;
//    if (i != tab.vec.size() - 1 or key == last.auto_number)
//        return i;
//    return -1;
//}

int barrier_search(int key, table& tab)
{
    automobile key_el;
    key_el.auto_number = key;
    tab.vec.push_back(key_el);

    int position = 0;
    while (tab.vec[position].auto_number != key)
        position++;

    if (position < tab.vec.size() - 1)
        return position;
    else
        return -1;
}

//int barrirger_seach(int* mArray, int _size, int find_el)
//{
//    int position = 0;
//    if (mArray[_size - 1] != find_el) //Проверим, нет ли искомого элемента на последней позиции
//    {
//        mArray[_size - 1] = find_el;  //Установим &quot;барьер&quot;
//        for (; mArray[position] != find_el; position++);  //Поиск
//        position++; //Корректируем номер позиции
//    }
//    else return _size;  //Если искомый элемент на последней позиции, то возвращаем размер
//
//    return position < _size ? position : 0;  //Если элемент найден, то возвращаем его позицию, если нет, то 0
//}

void fib_nums(table tab, int& q, int& p, int& i, int& v)
{
    while (v < tab.vec.size() + 1)
    {
        int temp = q;
        q = p;
        p = i;
        i = q + temp;
        v = i + p;
    }
    int m = v - (tab.vec.size() + 1);
    i = i - m;
}

void up(int& p, int& i, int& q, int& flag)
{
    if (p == 1)
        flag = 1;
    else
    {
        i = i + q;
        p = p - q;
        q = q - p;
    }
}

void down(int& p, int& i, int& q, int& flag)
{
    if (q == 0)
        flag = 1;
    else
    {
        i = i - q;
        int temp = q;
        q = p - q;
        p = temp;
    }
}


int fib_search(int key, table tab)
{
    int q = 0;
    int p = 1;
    int i = p + q;
    int v = i + p;

    fib_nums(tab, q, p, i, v);

    int flag = 0, result = -1;

    while (!flag)
    {
        if (i < 0)
        {
            up(p, i, q, flag);
        }
        else if (i >= tab.vec.size())
        {
            down(p, i, q, flag);
        }
        else if (tab.vec[i].auto_number < key)
        {
            up(p, i, q, flag);
        }
        else if (tab.vec[i].auto_number > key)
        {
            down(p, i, q, flag);
        }
        else
        {
            result = i;
            break;
        }
    }
    return result;
}


