#include <iostream>
#include "ATDdinArray.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num, n, m, way;
    typeX a, b, c;
    while (1)
    {
        cout << "\n\nМеню\n";
        cout << "0. Создать матрицы\n";
        cout << "1. Заполнить 1 матрицу\n";
        cout << "2. Заполнить 2 матрицу\n";
        cout << "3. Найти разность матриц\n";
        cout << "4. Завершить работу\n"; 
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        switch (num)
        {
        case 0:
            cout << "\nВведите число строк и столбцов 1 матрицы: ";
            cin >> n >> m;
            if (n <= 0 || m <= 0)
            {
                cout << "\nВведен недопустимый размер\n";
                deletion_din(a, b, c);
                exit(1);
            }
            create_array_din(a, n, m);
            cout << "\nВведите число строк и столбцов 2 матрицы: ";
            cin >> n >> m;
            if (n <= 0 || m <= 0)
            {
                cout << "\nВведен недопустимый размер\n";
                deletion_din(a,b,c);
                exit(2);
            }
            create_array_din(b, n, m);
            break;
        case 1:
            if (a.n > 0)
            {
                cout << "\nВведите 1 для автоматического заполнения матрицы или 2 для заполнения массива вручную: ";
                cin >> way;
                if (way == 1)
                    input_array_rand_din(a);
                else if (way == 2)
                {
                    cout << "\nВвод " << a.n * a.m << " чисел\n";
                    input_array_hand_din(a);
                }
                else
                    cout << "\nНет такого варианта\n";
            }
            else 
            {
                cout << "\nПустое множество\n";
                exit(3);
            }
            break;
        case 2:
            if (b.n > 0)
            {
                cout << "\nВведите 1 для автоматического заполнения матрицы или 2 для заполнения массива вручную: ";
                cin >> way;
                if (way == 1)
                    input_array_rand_din(b);
                else if (way == 2)
                {
                    cout << "\nВвод " << (b.n * b.m) << " чисел\n";
                    input_array_hand_din(b);
                }
                else
                    cout << "\nНет такого варианта\n";
            }
            else
            {
                cout << "\nПустое множество\n";
                exit(4);
            }
            break;
        case 3:
            if (a.n > 0 && b.n > 0 && a.n == b.n && a.m == b.m)
            {
                create_array_din(c, a.n, a.m);
                res_array_din(a, b, c);
                output_array_din(c);
            }
            else
            {
                cout << "\nНедопустимые размеры матриц\n";
                deletion_din(a, b, c);
                exit(5);
            }
            break;
        case 4:
            deletion_din(a, b, c);
            exit(6);
        default:
            cout << "\nНет такого пункта\n";
        }
    }
}

