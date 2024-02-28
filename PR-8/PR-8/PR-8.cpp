#include "windows.h"
#include "ATD.h"

int main() 
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0, num, pos, value;
	node *L1 = NULL, *L2 = NULL;
	while (1)
	{
		cout << "\n\nМеню\n";
		cout << "1. Создать список\n";
		cout << "2. Переформировать список L1, переписав в начало списка его часть, начиная с заданной позиции\n";
		cout << "3. Сформировать из значений списка L1 список L2, упорядоченный по возрастанию значения информационной части\n";
		cout << "4. Удалить из L1 все значения, равные заданному\n";
		cout << "5. Завершить работу\n";
		cout << "Выберите операцию и введите ее номер: ";
		cin >> num;
		cin.get();
		switch (num)
		{
		case 1:
			cout << "Введите количество узлов в создаваемом списке L1: ";
			cin >> n;
			if (n > 0)
			{
				cout << "Введите " << n << " чисел:\n";
				create_list(L1, n);
				cout << "Созданный список L1:\n";
				output_list(L1);
			}
			else
				cout << "Некорректный размер, список не создан\n";
			break;
		case 2:
			if (n <= 0)
				cout << "Список не создан\n";
			else
			{
				cout << "Введите позицию: ";
				cin >> pos;
				if (insert_part_first(L1, pos))
				{
					cout << "Новый вид списка L1:\n";
					output_list(L1);
				}
				else
					cout << "Некорректная позиция, список не изменен\n";
			}
			break;
		case 3:
			if (n <= 0)
				cout << "Список не создан\n";
			else
			{
				create_new_inc(L1, L2);
				cout << "Новый список L2:\n";
				output_list(L2);
			}
			break;
		case 4:
			if (n <= 0)
				cout << "Список не создан\n";
			else
			{
				cout << "Введите значение: ";
				cin >> value;
				delete_nodes(L1, value);
				cout << "Новый список L1:\n";
				output_list(L1);
			}
			break;
		case 5:
			exit(1);
		default:
			cout << "\nНет такой операции";
		}
	}
} 


