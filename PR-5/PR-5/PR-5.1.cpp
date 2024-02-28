#include <iostream>
#include "windows.h"
#include "ATD_static.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	string nom;
	table tab(10), arch_tab;
	input_table("Text.txt", tab);
	while (1)
	{
		cout << "\n\nМеню\n";
		cout << "1. Вставить информацию по рейсу в соответствии с датой и временем прибытия\n";
		cout << "2. Удалить информацию о прибывшем рейсе и сохранить ее в архивной таблице\n";
		cout << "3. Определить, сколько рейсов было задержано в указанную дату\n";
		cout << "4. Вывести информацию на табло\n";
		cout << "5. Завершить работу\n";
		cout << "Выберите операцию и введите ее номер: ";
		cin >> num;
		cin.get();
		switch (num)
		{
		case 1:
			if (tab.n == N)
			{
				cout << "\nДостигнут лимит добавления рейсов, вставка невозможна\n";
				break;
			}
			cout << "\nВведите информацию по рейсу (каждый пункт с новой строки):\n";
			if (input_flight(tab) == -1)
			{
				cout << "\nРейс с такой датой уже есть, вставка невозможна\n";
				break;
			}
			cout << "\nНовое табло:\n";
			output_table(tab);
			break;
		case 2:
			cout << "\nВведите номер удаляемого рейса: ";
			cin >> nom;
			delete_flight(nom, tab, arch_tab);
			cout << "\nНовое табло:\n";
			output_table(tab);
			cout << "\nАрхив:\n";
			output_table(arch_tab);
			break;
		case 3:
			cout << "\nВведите дату: ";
			cin >> nom;
			cout << "\n" << nom << " было задержано рейсов: " << count_delay(nom, arch_tab, tab);
			break;
		case 4:
			cout << "\n";
			output_table(tab);
			break;
		case 5:
			exit(1);
		default:
			cout << "\nНет такой операции";
		}
	}
}



























//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	table tab(10);
//	input_table("Text.txt", tab);
//	output_table(tab);
//	input_flight(tab);
//	output_table(tab);
//}

