#include <iostream>
#include "ATDdinArray.h"
int main()
{
    setlocale(LC_ALL, "ru");
    int n = 0, num, way = 0;
    typeX a;
    while (1)
    {
        cout << "\n\nМеню\n";
        cout << "1. Заполнить множество\n";
        cout << "2. Вывести множество\n";
        cout << "3. Вставить новое значение после значения в заданной позиции\n";
        cout << "4. Определить, сколько раз входит в массив максимальное значение массива\n";
        cout << "5. Удалить все числа массива, которые являются совершенными числами\n";
        cout << "6. Сформировать новый массив из совершенных чисел исходного массива\n";
        cout << "7. Завершить работу\n";
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nВведите n: ";
            cin >> n;
            if (n <= 0)
            {
                cout << "\nВведено n <= 0\n";
                exit(1);
            }
            cout << "\nВведите 1 для автоматического заполнения массива или 2 для заполнения массива вручную: ";
            cin >> way;
            if (way == 1)
            {
                if (input_array_rand(a, n) == 1)
                {
                    cout << "Нет достаточного объема памяти.\n";
                    exit(2);
                }
            }
            else if (way == 2)
            {
                cout << "\nВведите " << n << " чисел\n";;
                if (input_array_hand(a, n) == 1)
                {
                    cout << "Нет достаточного объема памяти.\n";
                    exit(3);
                }
            }
            else
                cout << "\nНет такого варианта\n";
            break;
        case 2:
            if (a.n > 0)
                output_array(a);
            else
                cout << "\nМножество не заполнено\n";
            break;
        case 3:
            if (a.n > 0)
            {
                int pos;
                typeitem value;
                cout << "\nВведите позицию, после которой нужно вставить новый элемент: ";
                cin >> pos;
                if (pos >= a.n || pos < 0)
                {
                    cout << "\nНекорректная позиция\n";
                    break;
                }
                cout << "\nВведите добавляемый элемент: ";
                cin >> value;
                if (add_element_after_position(a, pos, value) == 1)
                {
                    cout << "Нет достаточного объема памяти.\n";
                    exit(4);
                }
            }
            else
                cout << "\nМножество не заполнено\n";
            break;
        case 4:
            if (a.n > 0)
                cout << count_max_element(a) << endl;
            else
                cout << "\nМножество не заполнено\n";
            break;
        case 5:
            if (a.n > 0)
                delete_perfect(a);
            else
                cout << "\nМножество не заполнено\n";
            break;
        case 6:
            if (a.n > 0)
            {
                typeX b;
                if (new_array_perfect(a, b) == 1)
                {
                    cout << "Нет достаточного объема памяти.\n";
                    exit(5);
                }
                cout << "Получившийся массив:\n";
                output_array(b);
                free(b.X);
            }
            else
                cout << "\nМножество не заполнено\n";
            break;
        case 7:
            free(a.X);
            exit(6);
        default:
            cout << "\nНет такого пункта\n";
        }
    }
}
