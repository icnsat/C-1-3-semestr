#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

#include <chrono>

struct sorts
{
	int* mas = nullptr;
	int n = 0;
};

void create_mas(sorts& obj, int n);
void insert_rand(sorts& obj);
void insert_sort_inc(sorts& obj);
void insert_sort_des(sorts& obj);
void insertion_sort(sorts& obj);
void shell_sort(sorts& obj);
void merge(sorts& obj, int p, int q, int r);
void merge_sort(sorts& obj, int p, int r);






void output_mas(sorts obj);


int main()
{
	setlocale(LC_ALL, "rus");
	sorts obj;
	int count = 0;
	int n;
	cout << "Количество чисел в создаваемом массиве: ";
	cin >> n;
	create_mas(obj, n);
	for (int i = 0; i < obj.n; i++)
	{
		cin >> obj.mas[i];
	}
	//insert_rand(obj);
	//insert_sort_des(obj);
	//insert_sort_inc(obj);
	//output_mas(obj);
	auto begin = std::chrono::steady_clock::now();
	//insertion_sort (obj);
	shell_sort (obj);
	//merge_sort(obj, 0, n - 1);
	output_mas(obj);
	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	cout << endl << elapsed_ms.count();
	cout << endl << count;
}

void output_mas(sorts obj)
{
	cout << endl;
	for (int i = 0; i < obj.n; i++)
	{
		cout << obj.mas[i] << " ";
	}
}

void create_mas(sorts& obj, int n)
{
	obj.n = n;
	obj.mas = new int[n];
}

void insert_rand(sorts& obj)
{
	srand(time(0));
	for (int i = 0; i < obj.n; i++)
	{
		obj.mas[i] = rand() % 100;
	}
}

void insert_sort_inc(sorts& obj)
{
	srand(time(0));
	obj.mas[0] = rand() % 100;
	for (int i = 1; i < obj.n; i++)
	{
		obj.mas[i] = obj.mas[i-1] + (1 + rand() % 100);
	}
}

void insert_sort_des(sorts& obj)
{
	srand(time(0));
	obj.mas[obj.n - 1] = rand() % 100;
	for (int i = obj.n - 2; i >= 0; i--)
	{
		obj.mas[i] = obj.mas[i + 1] + (1 + rand() % 100);
	}
}

void insertion_sort(sorts& obj)
{
	//long long count = 0;
	for (int i = 1; i < obj.n; i++)
	{
		//count+=3;
		int key = obj.mas[i];
		int j = i - 1;
		while (j >= 0 && obj.mas[j] > key)
		{
			obj.mas[j + 1] = obj.mas[j];
			j--; 
		}
		obj.mas[j + 1] = key;
	}
	//cout << count << endl;
}

//void shell_sort(sorts& obj)
//{
//	int d = obj.n / 2;
//	while (d > 0)
//	{
//		for (int i = 0; i < d; i++)
//		{
//			int j = i;
//			while (j >= 0 && obj.mas[j] > obj.mas[j + d])
//			{
//				swap(obj.mas[j], obj.mas[j - 1]);
//				j--;
//			}
//		}
//		d /= 2;
//	}
//}


void shell_sort(sorts& obj)
{
	//int count = 1;
	int d = 1;
	while (d < obj.n / 3)
	{
		//count++;
		d = 3 * d + 1;
	}
	while (d > 0)
	{
		//count++;
		for (int i = d; i < obj.n; i++)
		{
			int j = i;
			//count++;
			while (j >= d && obj.mas[j] < obj.mas[j - d])
			{
				//count++;
				swap(obj.mas[j], obj.mas[j - d]);
				j -= d;
			}
			//count += 2;
		}
		//count++;
		d = d / 3;
	}
	//count++;
	//cout << endl << count << endl;
}

void merge_sort(sorts& obj, int p, int r)
{
	if (p < r)
	{
		//count++;
		int q = (p + r) / 2;
		merge_sort(obj, p, q);
		merge_sort(obj, q+1, r);
		merge(obj, p, q, r);
	}
	//count++;
	//cout << endl << count << endl;
}

void merge(sorts& obj, int p, int q, int r) 
{ 
	int n1 = q - p + 1; 
	int n2 = r - q; 
	int* L = new int[n1 + 1]; 
	int* R = new int[n2 + 1]; 
	for (int i = 0; i < n1; i++)
	{
		L[i] = obj.mas[p + i];
		//count+=2;
	}
	//count++;
	for (int j = 0; j < n2; j++)
	{
		R[j] = obj.mas[q + j + 1];
		//count+=2;
	}
	//count++;
	L[n1] = 999999999; 
	R[n2] = 999999999; 
	int i = 0, j = 0; 
	for (int k = p; k <= r; k++) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			//count+=2;
			obj.mas[k] = L[i]; 
			i++; 
		} 
		else 
		{ 
			//count+=2;
			obj.mas[k] = R[j]; 
			j++; 
		} 
	} 
	//count++;
} 
