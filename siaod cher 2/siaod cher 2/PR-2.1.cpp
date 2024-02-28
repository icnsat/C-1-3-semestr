//#include <iostream>
//#include "ATDdinArray.h"
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int n = 0, num, way = 0;
//    typeX a;
//    while (1)
//    {
//        cout << "\nМеню\n";
//        cout << "1. Заполнить множество\n";
//        cout << "2. Вывести множество\n";
//        cout << "3. Вставить новое значение после значения в заданной позиции\n";
//        cout << "4. Определить, сколько раз входит в массив максимальное значение массива\n";
//        cout << "5. Удалить все числа массива, которые являются совершенными числами\n";
//        cout << "6. Сформировать новый массив из совершенных чисел исходного массива\n";
//        cout << "7. Завершить работу\n";
//        cout << "Выберите операцию и введите ее номер: ";
//        cin >> num;
//        switch (num)
//        {
//        case 1:
//            cout << "\nВведите n: ";
//            cin >> n;
//            if (n <= 0)
//            {
//                cout << "\nВведено n < 0\n";
//                return 1;
//            }
//            cout << "\nВведите 1 для автоматического заполнения массива или 2 для заполнения массива вручную: ";
//            cin >> way;
//            if (way == 1)
//                input_array_rand(a, n);
//            else if (way == 2)
//            {
//                cout << "\nВведите " << n << " чисел\n";
//                input_array_hand(a, n);
//            }
//            else
//                cout << "\nОшибка\n";
//            break;
//        case 2:
//            cout << a.n;
//            if (a.n > 0)
//                output_array(a);
//            else
//                cout << "\nМножество не заполнено\n";
//            break;
//        case 3:
//            if (a.n > 0)
//            {
//                int pos, value;
//                cout << "\nВведите позицию, после которой нужно вставить новый элемент: ";
//                cin >> pos;
//                if (pos > a.n || pos < 0)
//                {
//                    cout << "\nНекорректная позиция\n";
//                    break;
//                }
//                cout << "\nВведите добавляемый элемент: ";
//                cin >> value;
//                add_element_after_position(a, pos, value);
//            }
//            else
//                cout << "\nМножество не заполнено\n";
//            break;
//        case 4:
//            if (a.n > 0)
//                cout << count_max_element(a) << endl;
//            else
//                cout << "\nМножество не заполнено\n";
//            break;
//        case 5:
//            if (a.n > 0)
//                delete_perfect(a);
//            else
//                cout << "\nМножество не заполнено\n";
//            break;
//        case 6:
//
//        case 7:
//            exit(1);
//        default:
//            cout << "\nНет такого пункта\n";
//        }
//    }
//}













#include <iostream>
#include "ATDdinArray.h"
int main()
{
    int n;
    int* array = NULL;
    setlocale(LC_ALL, "ru");
    cout << "Введите размер дин. массива:";
    cin >> n;
    if (n <= 0)
    {
        exit(1);
    }
    if (create(array, n) == 1) 
    {
        cout << "Нет достаточного объема памяти"; 
        exit(2);
    }
    inp_array(array, n);
    out_array(array, n);
    cout << array << endl;// адрес массива
    //free(array); // освобождение памяти
    if (insInPosValue(array, n, 2, 100) == 0)
    {
        cout << array << endl;// адрес массива
        out_array(array, n);
    }
    else
        cout << "Нет достаточного объема памяти";
   delFromPos(array, n, 2);
    out_array(array, n);
    free(array);
    if (insInPosValueNew(array, n, 2, 100) == 0) {
        out_array(array, n);
    }
    else
        cout << "Нет такого объема свободной дин. памяти\n";
    delFromPosNew(array, n, 2);
    out_array(array, n);
}



#include <iostream>
#include "ATDdinArray.h"
#include <vector>
int main()
{
    int n;
    vector<int> array;
    setlocale(LC_ALL, "ru");
    cout << "Введите размер дин. массива:";
    cin >> n;
    vector<int> array1(n);
    inp_array2(array1, n);
    out_array2(array1, n);
    array1.push_back(1);
    array1.push_back(2);
    array1.push_back(3);
    array1.push_back(4);
    out_array2(array1, array1.size());
    array.pop_back();
    out_array2(array1, array1.size());
    array1.insert(array1.begin() + 2, 100);  //сместись на два элемента вправо и вставь на вторую позицию 100
    if (n <= 0)
    {
        exit(1);
    }
    if (create(array, n) == 1)
    {
        cout << "Нет достаточного объема памяти";
        exit(2);
    }
    inp_array(array, n);
    out_array(array, n);
    cout << array << endl;// адрес массива
    //free(array); // освобождение памяти
    if (insInPosValue(array, n, 2, 100) == 0)
    {
        cout << array << endl;// адрес массива
        out_array(array, n);
    }
    else
        cout << "Нет достаточного объема памяти";
    delFromPos(array, n, 2);
    out_array(array, n);
    free(array);
    if (insInPosValueNew(array, n, 2, 100) == 0) {
        out_array(array, n);
    }
    else
        cout << " Нет такого объема свободной дин. памяти\n";
    delFromPosNew(array, n, 2);
    out_array(array, n);
}



/*

//удалить все четные

for (int i = 0; i < n; i++)
{
    if (X % 2 == 0)
    {
        for (int j = 0; i < n - 1; j++)
        {
            x[j] == x[j - 1];
            n--;
            i--;
        }
    }
}
//сложность O(N^2)
for (int i = 0; i < n;)
{
    if (X % 2 == 0)
    {
        for (int j = 0; i < n - 1; j++)
        {
            x[j] == x[j - 1];
            n--;
        }
    }
    else
    {
        i++;
    }
}
//сложность O(N) ?????
i = 0;
j = 0;
x[j] = x[i];
for (int i = 0; i < n; i++)
{
    if (x[i] % 2 != 0)
    {
        j++
    }
    n = j;

}
*/



