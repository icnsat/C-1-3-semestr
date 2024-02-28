#pragma once
#include <iostream>
#include"stdlib.h"
#include"string.h"
//#include "malloc.h"
using namespace std;
typedef int typeitem;

//struct typeX
//{
//	int n = 0;
//	typeitem* X = nullptr;
//	/*typeX(int n1)
//	{
//		n = n1;
//		X = (typeitem*)malloc(n * sizeof(typeitem));
//	}
//	typeX()
//	{
//		n = 0;
//	}*/
//};
//
//int input_array_hand(typeX& a, int n);
//int input_array_rand(typeX& a, int n);
//void output_array(typeX a);
//void add_element_after_position(typeX& a, int pos, int value);
//int count_max_element(typeX& a);
//bool is_perfect(int element);
//void delete_perfect(typeX& a);



//создание дин.массива €зык —и
//void* malloc(объем пам€ти дл€ структуры в байтах)
int create(int*& x, int n)
{
	x = (int*)malloc(n * sizeof(int));   //(int*) - приведение типа void к int*
	if (x == NULL) return 1; //нет достаточного объема
	return 0;
}

void inp_array(int* x, int n)
{
	cout << "¬ведите " << n << " чисел ";
	for (int i = 0; i < n; i++)
		cin >> x[i];
}

void out_array(int* x, int n)
{
	cout << "ћассив  X\n";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << "\n\n";
}

//вставить значение в заданную позицию
//предусловие: 0<=pos<n, n>0
// 1 2 3 4 5 n=5 pos=2 val=100
// 1 2 100 3 4 5
int insInPosValue(int*& x, int& n, int pos, int val) 
{
	if ((x = (int*)realloc(x, (n + 1) * sizeof(int))) == NULL)  //в приложении описываетс€ как убрать предупреждение 
		return 1;
	for (int i = n; i >= pos; i--)
		x[i] = x[i - 1];
	x[pos] = val;
	n++;
	return 0;
}

//удалит значение в заданной позиции
//предусловие: 0<=pos<n, n>0
void delFromPos(int*& x, int& n, int pos) {
	for (int i = pos; i < n - 1; i++)
		x[i] = x[i + 1];
	x = (int*)realloc((int*)x, (n - 1) * sizeof(int));
	n--;
}

//создание дин.массива €зык —++
int createNew(int*& x, int n) {
	x = new int[n];
	if (x == NULL) return 1; //нет достаточного объема
	return 0;
}

//вставить значение в заданную позицию
//предусловие: 0<=pos<n, n>0
// 1 2 3 4 5 n=5 pos=2
// 1 2 3 4 5
int insInPosValueNew(int*& x, int& n, int pos, int val) {
	int* y = new int[n + 1];
	if (y == NULL) return 1;
	for (int i = 0; i < pos; i++)
		y[i] = x[i];
	y[pos] = val;
	for (int i = pos + 1; i < n + 1; i++)
		y[i] = x[i - 1];
	n++;
	delete[]x;
	x = y;
	return 0;
}

//удалит значение в заданной позиции
//предусловие: 0<=pos<n, n>0
int delFromPosNew(int*& x, int& n, int pos) {
	int* y = new int[n - 1];
	if (y == NULL) return 1;
	for (int i = 0; i < pos; i++)
		y[i] = x[i];
	for (int i = pos; i < n - 1; i++)
		y[i] = x[i + 1];
	n--;
	delete[]x;
	x = y;
}





/*#include <vector>

//////////
void inp_array2(vector<int>& x, int n)
{
	cout << "¬ведите " << n << " чисел ";
	for (int i = 0; i < n; i++)
		cin >> x[i];
}

void out_array2(vector<int> x, int n)
{
	cout << "ћассив  X\n";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << "\n\n";
}
*/