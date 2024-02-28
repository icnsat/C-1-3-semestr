#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "ATDvector.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num, n, way;
    points_set a, b, c;
    while (1)
    {
        cout << "\n\nМеню\n";
        cout << "1. Добавить точки в первое множество\n";
        cout << "2. Добавить точки во второе множество\n";
        cout << "3. Вывести точки первого множества\n";
        cout << "4. Вывести точки второго множества\n";
        cout << "5. Найти вершины квадрата из первого множества, покрывающего второе множество\n";
        cout << "6. Завершить работу\n";
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "Введите количество добавляемых точек: ";
            cin >> n;
            if (n <= 0)
            {
                cout << "\nВведено недопустимое количество\n";
                exit(1);
            }
            cout << "\nВведите 1 для автоматического заполнения множества или 2 для заполнения множества вручную: ";
            cin >> way;
            if (way == 1)
                input_points_rand(a, n);
            else if (way == 2)
            {
                cout << "\nВведите координаты " << n << " точек\n";
                input_points_hand(a, n);
            }
            else
                cout << "\nНет такого варианта\n";
            break;
        case 2:
            cout << "Введите количество добавляемых точек: ";
            cin >> n;
            if (n <= 0)
            {
                cout << "\nВведено недопустимое количество\n";
                exit(2);
            }
            cout << "\nВведите 1 для автоматического заполнения множества или 2 для заполнения множества вручную: ";
            cin >> way;
            if (way == 1)
                input_points_rand(b, n);
            else if (way == 2)
            {
                cout << "\nВведите координаты " << n << " точек\n";
                input_points_hand(b, n);
            }
            else
                cout << "\nНет такого варианта\n";
            break;
        case 3:
            if (a.n > 0)
                output_points(a);
            else
                cout << "\nПустое множество\n";
            break;
        case 4:
            if (b.n > 0)
                output_points(b);
            else
                cout << "\nПустое множество\n";
            break;
        case 5:
            if (a.n > 0 && b.n > 0)
            {
                bool flag = true;
                for (int i = 0; i < a.n - 3; i++)
                {
                    for (int j = i + 1; j < a.n - 2; j++)
                    {
                        for (int k = j + 1; k < a.n - 1; k++)
                        {
                            for (int l = k + 1; l < a.n; l++)
                            {
                                if (isSquare(a.points[i], a.points[j], a.points[k], a.points[l]))
                                {
                                    double square_area = 2 * triangle_area(a.points[i], a.points[j], a.points[k]);
                                    bool point_find = true;
                                    for (int z = 0; z < b.n && point_find; z++)
                                    {
                                        point_find *= inSquare(c, b.points[z], a.points[i], a.points[j], a.points[k], a.points[l]);
                                    }
                                    if (point_find)
                                    {
                                        flag = false;
                                        output_points(c);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                if (flag)
                {
                    cout << "\nКвадрат не найден\n";
                    exit(3);
                }
            }
            else
            {
                cout << "\nПустое множество\n";
                exit(4);
            }
            break;
        case 6:
            exit(6);
        default:
            cout << "\nНет такого пункта\n";
        }
    }
}