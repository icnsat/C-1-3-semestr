#include <iostream>
#include "ATD.h"
int main()
{
    setlocale(LC_ALL, "ru");
    int n = 0, num, way = 0;
    typeX a;
    while (1) 
    {
        cout << "\nМеню\n";
        cout << "1. Заполнить множество\n";
        cout << "2. Вывести множество\n";
        cout << "3. Вставить новое значение после значения в заданной позиции\n";
        cout << "4. Определить, сколько раз входит в массив максимальное значение массива\n";
        cout << "5. Удалить все числа массива, которые являются совершенными числами\n";
        cout << "6. Завершить работу\n";
        cout << "Выберите операцию и введите ее номер: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nВведите n < " << N << endl;
            cin >> n;
            if (n < 0 || n > N)
            {
                cout << "\nВведено n < 0 или n > N\n";
                return 1;
            }
            cout << "\nВведите 1 для автоматического заполнения массива или 2 для заполнения массива вручную: ";
            cin >> way;
            if (way == 1)
                input_array_rand(a, n);
            else if (way == 2)
            {
                cout << "\nВведите " << n << " чисел\n";
                input_array_hand(a, n);
            }
            else
                cout << "\nОшибка\n";
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
                if (pos > a.n || pos < 0)
                {
                    cout << "\nНекорректная позиция\n";
                    break;
                }
                cout << "\nВведите добавляемый элемент: ";
                cin >> value;
                add_element_after_position(a, pos, value);
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
            exit(1);
        default: 
            cout << "\nНет такого пункта\n";
        }
    }
}

