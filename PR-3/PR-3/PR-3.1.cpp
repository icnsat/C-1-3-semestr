#include <iostream>
#include "ATDstatic.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num, n, m, way;
    typeX a, b, c;
    while (1)
    {
        cout << "\n\nМеню\n";
        cout << "1. Заполнить 1 матрицу\n";
        cout << "2. Заполнить 2 матрицу\n";
        cout << "3. Найти разность матриц\n";
        cout << "4. Завершить работу\n";
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nВведите число строк и столбцов 1 матрицы: ";
            cin >> n >> m;
            if (n <= 0 || n >= 100 || m <= 0 || m >= 100)
            {
                cout << "\nВведен недопустимый размер\n";
                exit(1);
            }
            cout << "\nВведите 1 для автоматического заполнения матрицы или 2 для заполнения массива вручную: ";
            cin >> way;
            if (way == 1)
                input_array_rand(a, n, m);
            else if (way == 2)
            {
                cout << "\nВвод " << (n * m) << " чисел\n";;
                input_array_hand(a, n, m);
            }
            else
                cout << "\nНет такого варианта\n";
            break;
        case 2:
            cout << "\nВведите число строк и столбцов 2 матрицы: ";
            cin >> n >> m;
            if (n <= 0 || n >= 100 || m <= 0 || m >= 100)
            {
                cout << "\nВведен недопустимый размер\n";
                exit(2);
            }
            cout << "\nВведите 1 для автоматического заполнения матрицы или 2 для заполнения массива вручную: ";
            cin >> way;
            if (way == 1)
                input_array_rand(b, n, m);
            else if (way == 2)
            {
                cout << "\nВвод " << (n * m) << " чисел\n";;
                input_array_hand(b, n, m);
            }
            else
                cout << "\nНет такого варианта\n";
            break;
        case 3:
            if (a.n > 0 && b.n > 0 && a.n == b.n && a.m == b.m)
            {
                res_array(a, b, c);
                output_array(c);
            }
            else
            {
                cout << "\nНедопустимые размеры матриц\n";
                exit(3);
            }
            break;
        case 4:
            exit(4);
        default:
            cout << "\nНет такого пункта\n";
        }
    }
}

