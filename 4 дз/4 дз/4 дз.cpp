

/////////////// 4 блок черновичный ////////////////////////

//№1 черновик

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ofstream f("ex.1.txt");
//    int a;
//    //int b;
//    int k = 0;
//    int ch[10];
//    cout << "Ввести 10 чисел\n";
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "a" << i + 1 << "=";
//        cin >> a;
//        f << a<<"\t";
//        ch[k++] = a;
//    }
//    f.close();
//    ifstream n("ex.1.txt");
//                            /*while (!n.eof())
//                            {
//                                if (n.eof()) break;
//                                n >> b;
//                                cout << b << endl; 
//                            }
//                            n.close();*/
//    if (!n.is_open())
//    {
//        cout << "Файл не может быть открыт";
//    }
//    else
//    {
//        int s = 0;
//        //int k = 0;
//        /*int ch[10];
//        while(n>>b)
//        {
//            ch[k++] = b;
//        }*/
//        for (int e = 0; e < 10; e++)
//        {
//            s += ch[e];
//        }
//        cout << s;
//    }
//}

//№1 чистовик (мб оставить переброс в массив после открытия файла для чтения, а не ввода в него)

// #include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ofstream f("ex.1.txt");
//    int a, k = 0, ch[10];
//    cout << "Ввести 10 чисел\n";
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "a" << i + 1 << "=";
//        cin >> a;
//        f << a << "\t";
//        ch[k++] = a;
//    }
//    f.close();
//    ifstream n("ex.1.txt");
//    if (!n.is_open())
//    {
//        cout << "Файл не может быть открыт";
//    }
//    else
//    {
//        int s = 0;
//        for (int e = 0; e < 10; e++)
//        {
//            s += ch[e];
//        }
//        cout << s;
//    }
//}
//№1

//////////№1
 
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ofstream f("ex.1.txt");
//    double a;
//    cout << "Ввести 10 чисел\n";
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "a" << i + 1 << "=";
//        cin >> a;
//        f << a << endl;
//    }
//    f.close();
//    ifstream n("ex.1.txt");
//    if (!n.is_open())
//    {
//        cout << "Файл не может быть открыт";
//    }
//    else
//    {
//        double sum = 0.0;
//        while (n >> a)
//        {
//            sum += a;
//        }
//        cout << "Сумма равна "<<sum;
//        n.close();
//    }
//}

////№? считывает символы и после пробела

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string str;
//    getline(cin, str);
//    cout << str;
//}

/////////№2

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//system("chcp 1251");
//int a;
//cout << "Ввести число\n";
//cin >> a;
//if (a > 0) {
//	a = 1;
//}
//switch (a)
//{
//	case 1:
//		cout<<"sign x = 1";
//		break;
//	case 0:
//		cout << "sign x = 0";
//		break;
//	default:
//		cout << "sign x = -1";
//		break;
//}
//}


//////№3

//#include <iostream>
//#include <string>
//#define _USE_MATH_DEFINES
//#include <math.h>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	string str;
//	cout << "Введите название фигуры:\n";
//	cin >> str;
//	int c = str.length();
//	switch (c)
//	{
//	case 13:
//		int a, b;
//		cout << "ввести стороны a,b\n";
//		cin >> a >> b;
//		cout << "S = " << a * b;
//		break;
//	case 11:
//		int h, n;
//		cout << "ввести высоту h и сторону n\n";
//		cin >> h >> n;
//		cout << "S = " << h * n*0.5;
//		break;
//	case 4:
//		int r;
//		cout << "ввести радиус r\n";
//		cin >> r;
//		cout << "S = " << M_PI*r*r;
//		break;
//	}
//}


////№4

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 0; i < 6; i++)
//	{
//		for (int n = 0; n < 9; n++)
//		{
//			cout << "*";
//		}
//		for (int t = 0;t < 20;t++)
//		{
//			cout << "_";
//		}
//		cout << "\n";
//	}
//	for (int k = 0; k < 6; k++)
//	{
//		for (int e = 0; e < 29; e++)
//		{
//			cout << "_";
//		}
//		cout << "\n";
//	}
//}


////№5 c f?

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	HWND hWnd = GetConsoleWindow();
//	HDC hDC = GetDC(hWnd);
//	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 204, 204));
//	SelectObject(hDC, Pen);
//	MoveToEx(hDC, 0, 85, NULL); //
//	LineTo(hDC, 200, 85);       // оси ОХ и ОУ
//	MoveToEx(hDC, 100, 0, NULL);//
//	LineTo(hDC, 100, 170);      //
//	for (float x = -8.0f; x <= 8.0f; x += 0.01f)
//	{
//		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);
//		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
//
//	}
//	ReleaseDC(hWnd, hDC);
//	cin.get();
//}

////№5

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	HWND hWnd = GetConsoleWindow();
//	HDC hDC = GetDC(hWnd);
//	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 204, 204));
//	SelectObject(hDC, Pen);
//	MoveToEx(hDC, 0, 85, NULL); //
//	LineTo(hDC, 200, 85);       // оси ОХ и ОУ
//	MoveToEx(hDC, 100, 0, NULL);//
//	LineTo(hDC, 100, 170);      //
//	for (float x = -8.0; x <= 8.0; x += 0.01)
//	{
//		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);
//		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
//
//	}
//	cin.get();
//	return 0;
//}


/////// была без // 6 //////

//#include <iostream>
//using namespace std;
//int transition(char rimnumber)
//{
//	switch (rimnumber)
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	default:
//		return 0;
//	}
//}
//bool is_correct_number(char letter)
//{
//	//const int size = 7;
//	char letters[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	for (int i = 0; i < 7; i++)
//	{
//		if (letter==letters[i])
//		{
//			return true;
//		}
//	}
//	return false;
//}
//bool is_correct_position(char previous, char next, int repetition)
//{
//	if ((next == previous) and ((previous == 'V') or (previous == 'L') or (previous == 'D')))
//	{
//		return false;
//	}
//	if ((repetition == 3) and ((next == 'X') or (next == 'C') or (next == 'M') or (next == 'I'))) 
//	{
//		return false;
//	}
//	if ((next == 'X' and previous == 'V') or (next == 'C' and previous == 'L') or (next == 'M' and previous == 'D'))
//	{
//		return false;
//	}
//}
//int calculation(char full_num[], int count)
//{
//	int res = 0, prev = 0, next;
//	for (int i = count; i >= 0; i--)
//	{
//		next = transition(full_num[i]);
//		if (prev > next)
//		{
//			res = (res - prev) + (prev - next);
//		}
//		else
//		{
//			res += next;
//		}
//		prev = next;
//
//	}
//	return res;
//}
//int main()
//{
//	system("chcp 1251");
//	const int size = 256;
//	char s[size] , next, previous;
//	int i, repetition = 0;
//	bool isCorrect = true;
//	cout << "Введите римскую запись числа\n";
//	for (i = 0; (next = cin.get()) != '\n'; i++)
//	{
//		if (i == 0)
//		{
//			if (is_correct_number(next))
//			{
//			s[i] = next;
//			previous = next;
//			}
//			else
//			{
//				isCorrect = false;
//				break;
//
//			}
//			
//		}
//		else
//		{
//			if (previous == next)
//				repetition++;
//			else
//				repetition = 0;
//			if (is_correct_number(next) and is_correct_position(previous, next, repetition))
//			{
//				s[i] = next;
//				previous = next;
//			}
//			else
//			{
//				isCorrect = false;
//				break;
//			}
//		}
//	}
//	if ((!isCorrect))                                                                                                                                                               // or (s[i - 3] == 'I' and s[i - 2] != 'I'))
//	{
//		cout << "Введенная запись некорректна";
//	}
//	else
//	{
//		                                                                                                                                                                      //cout << "Введенная запись корректна:" << s << endl;
//		cout << "Результат перевода:" << calculation(s, i);
//	}
//	cin.get();
//	return 0;
//}

////№6

//#include <iostream>
//using namespace std;
//bool isCorrectLetter(char letter)
//{   
//	const int size = 7;
//	char symbols[size] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	for (int i = 0; i < size; ++i) 
//	{
//		if (letter == symbols[i]) 
//		{
//			return true;
//		}
//	}
//	return false;
//}
//bool isCorrectSequence(char previous, char next, int repetition) 
//{
//	if ((next == previous) and ((previous == 'V') or (previous == 'L') or (previous == 'D')))
//	{
//		return false;
//	}
//	if ((repetition == 3) and ((next == 'X') or (next == 'C') or (next == 'M') or (next == 'I'))) 
//	{
//		return false;
//	}
//	if ((next == 'X' and previous == 'V') or (next == 'C' and previous == 'L') or (next == 'M' and previous == 'D')) 
//	{
//		return false;
//	}
//
//	return true;
//}
//int Number(char rimNumber) 
//{
//	switch (rimNumber) 
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	default: 
//		return 0;
//	}
//	return 0;
//}
//int calculation(char record[],int count) 
//{
//	int res = 0, prev = 0, next;
//	for (int i = count; i >= 0; --i) 
//	{
//		next = Number(record[i]);
//		if (prev > next) 
//		{
//			res = (res - prev) + (prev - next);
//		}
//		else 
//		{
//			res += next;
//		}
//		prev = next;
//
//	}
//	return res;
//}
//int main()
//{
//	system("chcp 1251");
//	const int size = 256;
//	char s[size] , next, previous;
//	int i, repetition = 0;
//	bool isCorrect = true;
//
//	cout << "Введите римскую запись числа\n";
//	for (i = 0; (next = cin.get()) != '\n'; ++i)
//	{
//		if (i == 0)
//		{
//			s[i] = next;
//			previous = next;
//		}
//		else
//		{
//			if (previous == next)
//				repetition++;
//			else
//				repetition = 0;
//			if (isCorrectLetter(next) and isCorrectSequence(previous, next, repetition))
//			{
//				s[i] = next;
//				previous = next;
//			}
//			else
//			{
//				isCorrect = false;
//				break;
//			}
//		}
//	}
//	if ((!isCorrect) or (s[i - 3] == 'I' and s[i - 2] != 'I'))
//	{
//		cout << "Введенная запись некорректна";
//	}
//	else
//	{
//		cout << "Введенная запись корректна:" << s << endl;
//		cout << "Результат перевода:" << calculation(s, i - 1);
//	}
//	cin.get();
//	return 0;
//}

//6666
/*#include <iostream>
using namespace std;

int getArabNumber(const char &);
bool isCorrectLetter(const char &);
bool getRomanNumeral(char[], int &);
bool checkSequence(const char[], const int &);
int getSubtractingSequence(const char &, const char &);
int calculation(const char[], const int &);

int main()
{
	const int size = 25;
	char romanNumeral[size];
	bool exit = false, isCorrectNumber;
	int actualSize;

	while (!exit)
	{
		actualSize = size;
		romanNumeral[0] = '\0';
		isCorrectNumber = false;

		cout << "Please enter Roman Numeral\n>";
		if (getRomanNumeral(romanNumeral, actualSize))
		{
			if (checkSequence(romanNumeral, actualSize))
			{
				isCorrectNumber = true;
			}
		}
		if (isCorrectNumber)
		{
			cout << calculation(romanNumeral, actualSize) << endl;
		}
		else
		{
			cout << "Provided Romam numeral is incorrect.\n";
		}

		cout << "\n1 :: Try once again\n2 :: EXIT\n>";
		if (cin.get() == '2')
		{
			exit = true;
		}
		cin.clear();
		cin.ignore(1000, '\n');
		system("CLS");
	}
	return 0;
}

//вычесление результата
int calculation(const char array[], const int &count)
{
	int res = 0;
	int prev = 0, next;
	for (int i = count; i >= 0; --i)
	{
		next = getArabNumber(array[i]);
		if (prev > next)
		{
			res = (res - prev) + (prev - next);
		}
		else
		{
			res += next;
		}
		prev = next;

	}
	return res;
}

bool checkSequence(const char romanNumeral[], const int& actualSize)
{
	int substrResult = 0;

	for (int i = actualSize - 1; i >= 0; --i)
	{
		if (i > 1)
		{
			//исключаем последовательности типа:  VXV, IVI, XLX, LCL, LXL, VIV, DCD //
			if (romanNumeral[i] == romanNumeral[i - 2] && romanNumeral[i] != romanNumeral[i - 1])
			{
				if (getArabNumber(romanNumeral[i - 1]) % getArabNumber(romanNumeral[i]) == 0
					|| getArabNumber(romanNumeral[i]) / getArabNumber(romanNumeral[i - 1]) == 5)
				{
					return false;
				}
				//исключаем последовательности типа:  IVV, IXX, XLL, XCC, CDD, CMM //
			}
			else if (romanNumeral[i] == romanNumeral[i - 1])
			{
				if (getArabNumber(romanNumeral[i - 2]) < getArabNumber(romanNumeral[i - 1]))
				{
					return false;
				}
			}
		}
		if (substrResult > 0 && getArabNumber(romanNumeral[i]) <= substrResult)
		{
			//cout << "3" << endl;
			return false; //цифра следующая слева от пары требующей вычитания должна быть
			//больше разности
		}
		else
		{
			//cout << "4" << endl;
			if (i > 0)
			{ //двигаемся далее по массиву для обработки следующей пары (если такая есть)
				//cout << "5" << endl;
				--i;
				//cout << romanNumeral[i] << " " <<  romanNumeral[i + 1] << endl;
				if (getArabNumber(romanNumeral[i]) < getArabNumber(romanNumeral[i + 1]))
				{
					substrResult = getSubtractingSequence(romanNumeral[i], romanNumeral[i + 1]);
					if (substrResult == -1)
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

//При вычитании допустимы только следующие последовательности
 * IV (4), IX(9), XL(40), XC(90), CD(400), CM(900)
 //
int getSubtractingSequence(const char& left, const char& right) {
	int result;
	//cout << "getsub "<< left << " " <<  right << endl;
	result = getArabNumber(right) - getArabNumber(left);
	if (result == 900 || result == 400 || result == 90 || result == 40 || result == 9 || result == 4) {
		return result;
	}
	return -1;
}

// Читаем строку. Проверяем на наличие цифры повторящейся
 // более трех раз подряд и корректность символа
 // Если все прошло успешно то функция заполняет массив и
 // возвращает true
 //!!! эта функция меняет значение размера массива
 //
bool getRomanNumeral(char romanNumeral[], int& maxSize) {
	char ch;
	int recurrenc = 1;

	for (int i = 0; i < maxSize; ++i) { //идем по строке пока позволяет размер массива
		ch = cin.get();
		if (isCorrectLetter(ch) || ch == '\n') { //корректен ли символ
			if (i > 0) {
				if (romanNumeral[i - 1] == ch) { //если предыдущий символ равен текущему
					recurrenc++;
					if (recurrenc == 4) { //достигнут недопустимый предел повторений
						//cout << "UPS!";
						cin.clear();
						cin.ignore(1000, '\n');
						return false;
					}
				}
				else {
					recurrenc = 1;
				}
			}
			if (ch == '\n') { //если достигнут конец строки
				romanNumeral[i] = '\0'; //то закрываем массмв char
				maxSize = i; //и выходим из цикла
			}
			else {
				romanNumeral[i] = ch;
			}
		}
		else {
			//cout << "UPS!";
			cin.clear();
			cin.ignore(1000, '\n');
			return false;
		}
	}
	return true;
}

//return roman digit arabic equivalent
int getArabNumber(const char &rimNumber)
{
	switch (rimNumber)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
	return 0;
}

//check if provided roman digit is correct
bool isCorrectLetter(const char &letter)
{
	const int size = 7;
	char mySymbols[size] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
	for (int i = 0; i < size; ++i)
	{
		if (letter == mySymbols[i])
		{
			return true;
		}
	}
	return false;
}
*/


////№6 еще какоёта 

//#include <iostream>
//using namespace std;
//bool isCorrectLetter(char letter)
//{   
//	const int size = 7;
//	char symbols[size] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	for (int i = 0; i < size; ++i) 
//	{
//		if (letter == symbols[i]) 
//		{
//			return true;
//		}
//	}
//	return false;
//}
//bool isCorrectSequence(char previous, char next, int repetition) 
//{
//	if ((next == previous) and ((previous == 'V') or (previous == 'L') or (previous == 'D')))
//	{
//		return false;
//	}
//	if ((repetition == 3) and ((next == 'X') or (next == 'C') or (next == 'M') or (next == 'I'))) 
//	{
//		return false;
//	}
//	if ((next == 'X' and previous == 'V') or (next == 'C' and previous == 'L') or (next == 'M' and previous == 'D')) 
//	{
//		return false;
//	}
//
//	return true;
//}
//int Number(char rimNumber) 
//{
//	switch (rimNumber) 
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	default: 
//		return 0;
//	}
//	return 0;
//}
//int calculation(char record[],int count) 
//{
//	int res = 0, prev = 0, next;
//	for (int i = count; i >= 0; --i) 
//	{
//		next = Number(record[i]);
//		if (prev > next) 
//		{
//			res = (res - prev) + (prev - next);
//		}
//		else 
//		{
//			res += next;
//		}
//		prev = next;
//
//	}
//	return res;
//}
//int main()
//{
//	system("chcp 1251");
//	const int size = 256;
//	char s[size] , next, previous;
//	int i, repetition = 0;
//	bool isCorrect = true;
//
//	cout << "Введите римскую запись числа\n";
//	for (i = 0; (next = cin.get()) != '\n'; ++i)
//	{
//		if (i == 0)
//		{
//			s[i] = next;
//			previous = next;
//		}
//		else
//		{
//			if (previous == next)
//				repetition++;
//			else
//				repetition = 0;
//			if (isCorrectLetter(next) and isCorrectSequence(previous, next, repetition))
//			{
//				s[i] = next;
//				previous = next;
//			}
//			else
//			{
//				isCorrect = false;
//				break;
//			}
//		}
//	}
//	if ((!isCorrect) or (s[i - 3] == 'I' and s[i - 2] != 'I'))
//	{
//		cout << "Введенная запись некорректна";
//	}
//	else
//	{
//		cout << "Введенная запись корректна:" << s << endl;
//		cout << "Результат перевода:" << calculation(s, i - 1);
//	}
//	cin.get();
//	return 0;
//}

////№7

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	int v;
//	cout << "Выберите вариант: 1 или 2\n";
//	cin >> v;
//	switch (v)
//	{
//	case 1:
//	{
//		int m = 37, b = 3, c = 64, s = 0, i, s0 = 0;
//		cout << "Введите i\n";
//		cin >> i;
//		for (int k = 0; k <= i; k++)
//		{
//			s = (m * s0 + b) % c;
//			s0 = s;
//		}
//		cout << s;
//		break;
//	}
//	case 2:
//	{
//		int m2 = 25173, b2 = 13849, c2 = 65537, s2, i2, s02 = 0;
//		cout << "Введите i\n";
//		cin >> i2;
//		for (int k2 = 0; k2 <= i2; k2++)
//		{
//			s2 = (m2 * s02 + b2) % c2;
//			s02 = s2;
//		}
//		cout << s2;
//		break;
//	}
//	default:
//		cout << "Неизвестный вариант";
//	}
//}


//к №8 ввод и вывод массива

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int n = 3;
//	const int m = 4;
//	int A[n][m] = { 
//		{5,2,0,10},
//		{3,5,2,5},
//		{20,0,0,0}
//	};
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << A[i][j]<<"\t";
//		}
//		cout << "\n";
//	}
//}

////№8 черновик

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int n = 3;
//	const int m = 4;
//	int A[n][m] = { 
//		{5,2,0,10},
//		{3,5,2,5},
//		{20,0,0,0}
//	};
//	const int k = 2;
//	float B[m][k] = {
//		{(1,20),(0,50)},
//		{(2,8), (0,40)},
//		{(5,00), (1,00)},
//		{(2,00),(1,50)},
//	};
//	float C[n][k];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			for (int p = 0; p <= m; p++)
//			{
//				C[i][j] += (A[i][p] * B[p][j]);
//			}
//		}
//	}
//	for (int l = 0; l < n; l++)
//		{
//			for (int h = 0; h < k; h++)
//			{
//				cout << C[l][h]<<"\t";
//			}
//			cout << "\n";
//		}
//}


//№8 черновик 2

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int n = 3;
//	const int m = 4;
//	int A[n][m] = {
//		{5,2,0,10},
//		{3,5,2,5},
//		{20,0,0,0}
//	};
//	const int k = 2;
//	//float B[m][k];
	//for (int w = 0; w < m; w++)
	//{
	//	for (int q = 0; q < k; q++)
	//	{
	//		cin >> B[w][q];
	//		/*cout << C[l][h] << "\t";*/
	//	}
	//	/*cout << "\n";*/
	//}
//	float B[m][k] = {
//		{(1,2),(0,5)},
//		{(2,8), (0,4)},
//		{(5), (1)},
//		{(2),(1,5)},
//	};
//	float C[n][k];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			C[i][j] = 0;
//			for (int p = 0; p < m; p++)
//			{
//				C[i][j] += (A[i][p] * B[p][j]);
//			}
//		}
//	}
//	for (int l = 0; l < n; l++)
//	{
//		for (int h = 0; h < k; h++)
//		{
//			cout << C[l][h] << "\t";
//		}
//		cout << "\n";
//	}
//}


////№8 черновик только массив

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int stb1 = 4;
//	const int str1 = 3;
//	float A[str1][stb1] = {
//		{(5),(2),(0),(10)},
//		{(3),(5),(2),(5)},
//		{(20),(0),(0),(0)}
//	};
//	const int stb2 = 2;
//	float B[stb1][stb2] = {
//		{(1.2),(0.5)},
//		{(2.8),(0.4)},
//		{(5.0),(1.0)},
//		{(2.0),(1.5)}
//	};
//	float C[str1][stb2];
//	for (int i = 0; i < str1; i++)
//	{
//		for (int j = 0; j < stb2; j++)
//		{
//			C[i][j] = 0;
//			for (int k = 0; k < stb1; k++)
//			{
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//	for (int g = 0; g < str1; g++)
//	{
//		for (int v = 0; v < stb2; v++)
//		{
//			cout << C[g][v]<<"\t";
//		}
//		cout<<"\n";
//	}
//}


////№8

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	const int stb1 = 4;
//	const int str1 = 3;
//	float A[str1][stb1] = {
//		{(5),(2),(0),(10)},
//		{(3),(5),(2),(5)},
//		{(20),(0),(0),(0)}
//	};
//	const int stb2 = 2;
//	float B[stb1][stb2] = {
//		{(1.2),(0.5)},
//		{(2.8),(0.4)},
//		{(5.0),(1.0)},
//		{(2.0),(1.5)}
//	};
//	float C[str1][stb2];
//	for (int i = 0; i < str1; i++)
//	{
//		for (int j = 0; j < stb2; j++)
//		{
//			C[i][j] = 0;
//			for (int k = 0; k < stb1; k++)
//			{
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//	float maxpr = 0;
//	float minpr = 100000;
//	int nmaxpr = 0;
//	int nminpr = 0;
//	for (int g = 0; g < str1; g++)
//	{
//		if (C[g][0] > maxpr)
//		{
//			maxpr = C[g][0];
//			nmaxpr = g+1;
//		}
//		if (C[g][0] < minpr)
//		{
//			minpr = C[g][0];
//			nminpr = g+1;
//		}
//	}
//	cout << "1) Максимальная выручка у " << nmaxpr <<" продавца" << endl;
//	cout << "   Минимальная выручка у " << nminpr << " продавца" << endl;
//	float maxk = 0;
//	float mink = 100000;
//	int nmaxk = 0;
//	int nmink = 0;
//	for (int y = 0; y < str1; y++)
//	{
//		if (C[y][1] > maxk)
//		{
//			maxk = C[y][1];
//			nmaxk = y + 1;
//		}
//		if (C[y][1] < mink)
//		{
//			mink = C[y][0];
//			nmink = y + 1;
//		}
//	}
//	cout << "2) Максимальные комиссионные у " << nmaxk << " продавца" << endl;
//	cout << "   Минимальные комиссионные у " << nmink << " продавца" << endl;
//	float sumpr = 0;
//	for (int h = 0; h < str1; h++)
//	{
//		sumpr += C[h][0];
//	}
//	cout << "3) Общая выручка равна " << sumpr << endl;
//	float sumk = 0;
//	for (int d = 0; d < str1; d++)
//	{
//		sumk += C[d][1];
//	}
//	cout << "4) Общие комиссионные равны " << sumk << endl;
//	float sumobsh = 0;
//	for (int t = 0; t < str1; t++)
//	{
//		for (int v = 0; v < stb2; v++)
//		{
//			sumobsh+= C[t][v];
//		}
//	}
//	cout << "5) Общие сумма денег равна " << sumobsh << endl;
//}

////№9

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");ь
//	cout << "введите число и СС\n";
//	float num
//}














//--------------------------------//




//............4 блок............//


//№1

//#include <iostream>
//#include <fstream>
//using namespace std;
// 
//int main()
//{
//    system("chcp 1251");
//    ofstream f("ex.1.txt");
//    double a;
//    cout << "Ввести 10 чисел\n";
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "a" << i + 1 << "=";
//        cin >> a;
//        f << a << endl;
//    }
//    f.close();
//    ifstream n("ex.1.txt");
//    if (!n.is_open())
//    {
//        cout << "Файл не может быть открыт";
//    }
//    else
//    {
//        double sum =0.0;
//        while (n >> a)
//        {
//            sum += a;
//        }
//        cout << "Сумма равна "<<sum;
//        n.close();
//    }
//}


//№2

//#include <iostream>
//using namespace std;
// 
//int sign(double x)
//{
//	if (x < 0)
//		return -1;
//	if (x == 0)
//		return 0;
//	return 1;
//}
// 
//int main()
//{
//	system("chcp 1251");
//	double x;
//	cout << "Введите число";
//	cin >> x;
//	cout << "sign(x) = " << sign(x) << endl;
//}


//№3

//#define _USE_MATH_DEFINES
//#include <cmath>
//#include <iostream>
//using namespace std;
//
//void rectangle()
//{
//	double X, Y;
//	cout << "Введите стороны прямоугольника" << endl;
//	cin >> X >> Y;
//	if (X <= 0 or Y <= 0)
//		cout << "Прямоугольник не существует" << endl;
//	else
//		cout << "Площадь прямоугольника: " << X * Y << endl;
//}
//
//void circle()
//{
//	double R;
//	cout << "Введите радиус круга" << endl;
//	cin >> R;
//	if (R <= 0)
//		cout << "Круга не существует" << endl;
//	else
//		cout << "Площадь круга: " << M_PI * pow(R, 2) << endl;
//}
//
//void triangle()
//{
//	double A, B, C;
//	cout << "Введите стороны треугольника" << endl;
//	cin >> A >> B >> C;
//	if ((A + B <= C) or (B + C <= A) or (A + C <= B))
//		cout << "Треугольник не существует" << endl;
//	else if (A <= 0 or B <= 0 or C <= 0)
//		cout << "Треугольник не существует" << endl;
//	else
//	{
//		double p = (A + B + C) / 2;
//		cout << "Площадь треугольника: " << sqrt(p * (p - A) * (p - B) * (p - C));
//	}
//}
//
//int main()
//{
//	system ("chcp 1251");
//	int v;
//	cout << "Введите номер фигуры, площадь которой нужно найти:\n" << "1 - Прямоугольник\n" << "2 - Круг\n" << "3 - Треугольник\n";
//	cin >> v;
//	switch (v) 
//	{
//	case 1:
//		rectangle();
//		break;
//	case 2:
//		circle();
//		break;
//	case 3:
//		triangle();
//		break;
//	default:
//		cout << "Неверный номер фигуры" << endl;
// break;
//	}
//}


//№4

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	for (int i = 0; i < 13; i++)
//	{
//		if (i < 6)
//		{
//			for (int x = 0; x < 8; x++)
//			{
//				cout << "* ";
//			}
//			for (int j = 0; j < 34; j++)
//			{
//				cout << "_";
//			}
//			cout << "\n";
//		}
//		else
//		{
//			for (int a = 0; a < 50; a++)
//			{
//				cout << "_";
//			}
//			cout << "\n";
//		}
//	}
//}


//№5

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	HWND hWnd = GetConsoleWindow();
//	HDC hDC = GetDC(hWnd);
//	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 204, 204));
//	SelectObject(hDC, Pen);
//	MoveToEx(hDC, 0, 85, NULL); //
//	LineTo(hDC, 200, 85);       // оси ОХ и ОУ
//	MoveToEx(hDC, 100, 0, NULL);//
//	LineTo(hDC, 100, 170);      //
//	for (float x = -8.0; x <= 8.0; x += 0.01)
//	{
//		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);
//		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
//
//	}
//	cin.get();
//	return 0;
//}


//№6

//чето не то

//#include <iostream>
//#include <string>
//using namespace std;
//
//bool check_minus(int value, int current_value, string used_lines)
//{
//    int elements[7] = { 1, 5, 10, 50, 100, 500, 1000 };
//    for (int i = 0; i < 7; i++)
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            if ((elements[i] == value and elements[j] == current_value and value * 10 == current_value) or (1 == value and 5 == current_value))
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int pow10(int x)
//{
//    int i = 0;
//    while (pow(10, i) < x)
//    {
//        i++;
//    }
//    if (pow(10, i) == x)
//    {
//        return 3;
//    }
//    else
//    {
//        return 1;
//    }
//}
//
//
//int main()
//{
//    system("chcp 1251");
//    int same_sum = 0, res = 0, same_count = 0, current_value, value = 0, st;
//    string input, used_letters = "";
//    char last_letter;
//    cin >> input;
//    last_letter = input[0];
//    for (int i = 0; i < input.length(); i++)
//    {
//        switch (input[i])
//        {
//        case 'I':
//            current_value = 1;
//            break;
//        case 'V':
//            current_value = 5;
//            break;
//        case 'X':
//            current_value = 10;
//            break;
//        case 'L':
//            current_value = 50;
//            break;
//        case 'C':
//            current_value = 100;
//            break;
//        case 'D':
//            current_value = 500;
//            break;
//        case 'M':
//            current_value = 1000;
//            break;
//        default:
//            cout << "Неправильно введено число";
//            return 0;
//        }
//        if (i == 0)
//        {
//            st = log10(current_value);
//        }
//        for (int j = 0; j < used_letters.length(); j++)
//        {
//            if (input[i] == used_letters[j] and not ((value < current_value) and (current_value % 10 == 0)) and not(input[i] == 5))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        if (last_letter == input[i])
//        {
//            same_count += 1;
//            same_sum += current_value;
//            if (same_count > pow10(current_value))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        else
//        {
//            if (value < current_value and check_minus(value, current_value, used_letters) and same_count == 1)
//            {
//                if (same_sum == 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += current_value - same_sum;
//                same_count = 0;
//                same_sum = 0;
//                st = log10(current_value) - 1;
//                used_letters += input[i - 1];
//            }
//            else if (value > current_value)
//            {
//                int a = log10(current_value * 2);
//                if (a > st and used_letters.length() != 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += same_sum;
//                same_count = 1;
//                st = log10(current_value);
//                same_sum = current_value;
//                used_letters += input[i - 1];
//            }
//            else
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        last_letter = input[i];
//        value = current_value;
//    }
//    res += same_sum;
//    cout << res;
//}

//версия с инета

//#include <iostream>
//#include <string> 
//using namespace std;
//
//int chisla(char znak)
//{
//	switch (znak)
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	default:
//		return -1;
//	}
//}
//
//int dekodirovka(string rimskchsl)
//{
//	int cifri = 1;
//	int otvet = 0;
//	for (int i = 0; i < rimskchsl.length(); ++i)
//	{
//		rimskchsl[i] = toupper(rimskchsl[i]);
//		if (i != 0)
//			if (rimskchsl[i] == rimskchsl[i - 1])
//				cifri++;
//			else
//				cifri = 1;
//		if (cifri > 3)
//			return -1;
//	}
//	for (int i = 0; i < rimskchsl.length(); ++i)
//	{
//		if (chisla(rimskchsl[i]) == -1)
//			return -1;
//		if (i < rimskchsl.length() - 1)
//		{
//			if (chisla(rimskchsl[i]) >= chisla(rimskchsl[i + 1]))
//				otvet += chisla(rimskchsl[i]);
//			else
//			{
//				otvet += chisla(rimskchsl[i + 1]) - chisla(rimskchsl[i]);
//				++i;
//			}
//		}
//		else otvet += chisla(rimskchsl[i]);
//	}
//	return otvet;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите римскую запись числа" << endl;
//	string chislo;
//	cin >> chislo;
//	int arabski;
//	arabski = dekodirovka(chislo);
//	if (arabski == -1)
//		cout << "Ошибка" << endl << endl;
//	else
//		cout << "Результат перевода: " << arabski << endl;
//}

//чето с инета хз всё в куче

//#include <iostream>
//using namespace std;
//
//int rim_to_arab(const char rimNumber)
//{
//    switch (rimNumber)
//    {
//    case 'I':
//        return 1;
//    case 'V':
//        return 5;
//    case 'X':
//        return 10;
//    case 'L':
//        return 50;
//    case 'C':
//        return 100;
//    case 'D':
//        return 500;
//    case 'M':
//        return 1000;
//    }
//    return 0;
//}
//
//bool is_correct_letter(const char letter)
//{
//    char all_symbols[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//    for (int i = 0; i < 7; ++i)
//    {
//        if (letter == all_symbols[i])
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//int getSubtractingSequence(const char& left, const char& right)
//{
//    int result;
//    result = rim_to_arab(right) - rim_to_arab(left);
//    if (result == 900 or result == 400 or result == 90 or result == 40 or result == 9 or result == 4)
//    {
//        return result;
//    }
//    return -1;
//}
//
//
//bool checkSequence(const char romanNumeral[], const int &actualSize) {
//    int substrResult = 0;
//
//    for (int i = actualSize - 1; i >= 0; --i) {
//        if (i > 1)
//        {
//            if (romanNumeral[i] == romanNumeral[i - 2] and romanNumeral[i] != romanNumeral[i - 1])
//            {
//                if (rim_to_arab(romanNumeral[i - 1]) % rim_to_arab(romanNumeral[i]) == 0 or rim_to_arab(romanNumeral[i]) / rim_to_arab(romanNumeral[i - 1]) == 5)
//                {
//                    return false;
//                }
//            }
//            else if (romanNumeral[i] == romanNumeral[i - 1])
//            {
//                if (rim_to_arab(romanNumeral[i - 2]) < rim_to_arab(romanNumeral[i - 1]))
//                {
//                    return false;
//                }
//            }
//        }
//        if (substrResult > 0 and rim_to_arab(romanNumeral[i]) <= substrResult)
//        {
//            return false;
//        }
//        else
//        {
//            if (i > 0)
//            { 
//                --i;
//                if (rim_to_arab(romanNumeral[i]) < rim_to_arab(romanNumeral[i + 1]))
//                {
//                    substrResult = getSubtractingSequence(romanNumeral[i], romanNumeral[i + 1]);
//                    if (substrResult == -1)
//                    {
//                        return false;
//                    }
//                }
//            }
//        }
//    }
//    return true;
//}
//
//
//bool getRomanNumeral(char romanNumeral[], int &maxSize)
//{
//    char ch;
//    int repetition = 1;
//
//    for (int i = 0; i < maxSize; ++i)
//    {
//        ch = cin.get();
//        if (is_correct_letter(ch) or ch == '\n')
//        {
//            if (i > 0)
//            {
//                if (romanNumeral[i - 1] == ch)
//                {
//                    repetition++;
//                    if (repetition == 4)
//                    {
//                        cout << "ошибка";
//                         /*cin.clear();
//                         cin.ignore(1000, '\n');*/
//                        return false;
//                    }
//                }
//                else
//                {
//                    repetition = 1;
//                }
//            }
//            if (ch == '\n')
//            {
//                romanNumeral[i] = '\0';
//                maxSize = i;
//            }
//            else
//            {
//                romanNumeral[i] = ch;
//            }
//        }
//        else
//        {
//            cout << "ошибка";
//           /* cin.clear();
//            cin.ignore(1000, '\n')*/;
//            return false;
//        }
//    }
//    return true;
//}
//
//int calculation(const char array[], const int &count) 
//{
//    int res = 0;
//    int prev = 0, next;
//    for (int i = count; i >= 0; --i) {
//        next = rim_to_arab(array[i]);
//        if (prev > next) {
//            res = (res - prev) + (prev - next);
//        }
//        else {
//            res += next;
//        }
//        prev = next;
//
//    }
//    return res;
//}
//
//int main() 
//{
//    system("chcp 1251");
//    const int size = 25;
//    char romanNumeral[size];
//    bool exit = false, isCorrectNumber;
//    int actualSize;
//    actualSize = size;
//    romanNumeral[0] = '\0';
//    isCorrectNumber = false;
//    cout << "Введите римскую запись\n";
//    if (getRomanNumeral(romanNumeral, actualSize)) 
//    {
//        if (checkSequence(romanNumeral, actualSize)) 
//        {
//            isCorrectNumber = true;
//        }
//    }
//    if (isCorrectNumber) 
//    {
//        cout << calculation(romanNumeral, actualSize) << endl;
//    }
//    else 
//    {
//        cout << "Некорректное число\n";
//    }
//
//}
//
//
//
//
////№6
//#include <iostream>
//using namespace std;
//bool is_correct_letter(char letter)
//{   
//	const int size = 7;
//	char symbols[size] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	for (int i = 0; i < size; ++i) 
//	{
//		if (letter == symbols[i]) 
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//bool is_сorrect_sequence(char previous, char next, int repetition) 
//{
//	if ((next == previous) and ((previous == 'V') or (previous == 'L') or (previous == 'D')))
//	{
//		return false;
//	}
//	if ((repetition == 3) and ((next == 'X') or (next == 'C') or (next == 'M') or (next == 'I'))) 
//	{
//		return false;
//	}
//	if ((next == 'X' and previous == 'V') or (next == 'C' and previous == 'L') or (next == 'M' and previous == 'D')) 
//	{
//		return false;
//	}
//	return true;
//}
//
//int Number(char rimNumber) 
//{
//	switch (rimNumber) 
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	default: 
//		return 0;
//	}
//}
//
//int calculation(char record[],int count) 
//{
//	int res = 0, prev = 0, next;
//	for (int i = count; i >= 0; --i) 
//	{
//		next = Number(record[i]);
//		if (prev > next) 
//		{
//			res = (res - prev) + (prev - next);
//		}
//		else 
//		{
//			res += next;
//		}
//		prev = next;
//
//	}
//	return res;
//}
//int main()
//{
    //system("chcp 1251");
    //char s[30],next, previous,res;
    //int repetition = 1;
    //cout << "Введите римскую запись числа\n";
    //for (int i = 0; (next = cin.get()) != '\n'; i++)
    //{
    //    if (is_correct_letter(next))
    //    {
    //        if (i == 0)
    //        {
    //            s[i] = next;
    //            previous = next;
    //            res += next;
    //        }
    //        else
    //        {
    //            s[i] = next;
    //            if (previous == next)
    //                repetition++;
    //            else
    //                repetition = 1;
    //            if (is_сorrect_sequence (previous, next, repetition))
    //            {
    //                if (next > previous)
    //                {
    //                    res += next - previous;
    //                }
    //                else if (next < previous)
    //                {
    //                    res += next;
    //                }
//
    //    }
    //}
    //
    //
    //	const int size = 256;
    //	char s[size] , next, previous;
    //	int i, repetition = 0;
    //	bool isCorrect = true;
    //
    //	cout << "Введите римскую запись числа\n";
    //	for (i = 0; (next = cin.get()) != '\n'; ++i)
    //	{
    //		if (i == 0)
    //		{
    //			s[i] = next;
    //			previous = next;
    //		}
    //		else
    //		{
    //			if (previous == next)
    //				repetition++;
    //			else
    //				repetition = 0;
    //			if (is_correct_letter(next) and is_сorrect_sequence(previous, next, repetition))
    //			{
    //				s[i] = next;
    //				previous = next;
    //			}
    //			else
    //			{
    //				isCorrect = false;
    //				break;
    //			}
    //		}
    //	}
    //	if (!isCorrect)                                                                        //or (s[i - 3] == 'I' and s[i - 2] != 'I'))
    //	{
    //		cout << "Введенная запись некорректна";
    //	}
    //	else
    //	{
    //		cout << "Введенная запись корректна:" << s << endl;
    //		cout << "Результат перевода:" << calculation(s, i - 1);
    //	}
    //	cin.get();
    //	return 0;
    //}


//ильи

//#include <iostream>
//#include <string>
//using namespace std;
//bool check_minus(int value, int current_value, string used_lines) 
//{
//    int elements[7] = { 1, 5, 10, 50, 100, 500, 1000 };
//    for (int i = 0; i < 7; i++) 
//    {
//        for (int j = 0; j < 7; j++) 
//        {
//            if (elements[i] == value and elements[j] == current_value and value * 10 == current_value) 
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int pow10(int x) 
//{
//    int i = 0;
//    while (pow(10, i) < x) 
//    {
//        i++;
//    }
//    if (pow(10, i) == x) 
//    {
//        return 3;
//    }
//    else 
//    {
//        return 1;
//    }
//}
//int main()
//{
//    system ("chcp 1251");
//    int same_sum = 0, res = 0, same_count = 0, current_value, value = 0, st; 
//    string input, used_letters = "";
//    char last_letter;
//    cin >> input;
//    last_letter = input[0];
//    for (int i = 0; i < input.length(); i++) 
//    {
//        switch (input[i])
//        {
//        case 'I': 
//            current_value = 1; 
//            break;
//        case 'V': 
//            current_value = 5;  
//            break;
//        case 'X': 
//            current_value = 10; 
//            break;
//        case 'L': 
//            current_value = 50;  
//            break;
//        case 'C': 
//            current_value = 100;  
//            break;
//        case 'D': 
//            current_value = 500;  
//            break;
//        case 'M': 
//            current_value = 1000;  
//            break;
//        default:
//            cout << "Неправильно введено число";
//            return 0;
//        }
//        if (i == 0) 
//        { 
//            st = log10(current_value); 
//        }
//        for (int j = 0; j < used_letters.length(); j++) 
//        {
//            if (input[i] == used_letters[j] and not (value < current_value and (current_value % 10 == 0))) 
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        if (last_letter == input[i]) 
//        {
//            same_count += 1;
//            same_sum += current_value;
//            if (same_count > pow10(current_value)) 
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        else 
//        {
//            if (value < current_value and check_minus(value, current_value, used_letters) and same_count == 1) 
//            { 
//                if (same_sum == 0) 
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += current_value - same_sum;
//                same_count = 0;
//                same_sum = 0;
//                st = log10(current_value) - 1;
//                used_letters += input[i - 1];
//
//            }
//            else if (value > current_value) 
//            {
//                int a = log10(current_value * 2);
//                if (a > st and used_letters.length() != 0) 
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += same_sum;
//                same_count = 1;
//                st = log10(current_value);
//                same_sum = current_value;
//                used_letters += input[i - 1];
//            }
//            else 
//            { 
//                cout << "Неправильно введено число";  
//                return 0; 
//            }
//        }
//        last_letter = input[i];
//        value = current_value;
//    }
//    res += same_sum;
//    cout << res;
//}

//попытка исправить

//#include <iostream>
//#include <string>
//using namespace std;
//bool check_minus(int value, int current_value)
//{
//    int elements[7] = { 1, 5, 10, 50, 100, 500, 1000 };
//    for (int i = 0; i < 7; i += 2)
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            if (elements[i] == value and elements[j] == current_value and ((value * 10 == current_value) or (value * 5 == current_value)))
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int pow10(int x)
//{
//    int i = 0;
//    while (pow(10, i) < x)
//    {
//        i++;
//    }
//    if (pow(10, i) == x)
//    {
//        return 3;
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    system("chcp 1251");
//    int same_sum = 0, res = 0, same_count = 0, current_value, value = 0, st;
//    string input, used_letters = "";
//    char last_letter;
//    cin >> input;
//    last_letter = input[0];
//    for (int i = 0; i < input.length(); i++)
//    {
//        switch (input[i])
//        {
//        case 'I':
//            current_value = 1;
//            break;
//        case 'V':
//            current_value = 5;
//            break;
//        case 'X':
//            current_value = 10;
//            break;
//        case 'L':
//            current_value = 50;
//            break;
//        case 'C':
//            current_value = 100;
//            break;
//        case 'D':
//            current_value = 500;
//            break;
//        case 'M':
//            current_value = 1000;
//            break;
//        default:
//            cout << "Неправильно введено число";
//            return 0;
//        }
//        if (i == 0)
//        {
//            st = log10(current_value);
//        }
//        for (int j = 0; j < used_letters.length(); j++)
//        {
//            if (input[i] == used_letters[j] and not (value < current_value and (current_value % 10 == 0)))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        if (last_letter == input[i])
//        {
//            same_count += 1;
//            same_sum += current_value;
//            if (same_count > pow10(current_value))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        else
//        {
//            if (value < current_value and check_minus(value, current_value) and same_count == 1)
//            {
//                if (same_sum == 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += current_value - same_sum;
//                same_count = 0;
//                same_sum = 0;
//                st = log10(current_value) - 1;
//                used_letters += input[i - 1];
//
//            }
//            else if (value > current_value)
//            {
//                int a = log10(current_value * 2);
//                if (a > st and used_letters.length() != 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += same_sum;
//                same_count = 1;
//                st = log10(current_value);
//                same_sum = current_value;
//                used_letters += input[i - 1];
//            }
//            else
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        last_letter = input[i];
//        value = current_value;
//    }
//    res += same_sum;
//    cout << res;
//}


//итог сдала//

//#include <iostream>
//#include <string>
//using namespace std;
//bool check_minus(int value, int current_value)
//{
//    int elements[7] = { 1, 5, 10, 50, 100, 500, 1000 };
//    if (value == 1 and current_value == 5)
//    {
//        return true;
//    }
//    for (int i = 0; i < 7; i += 2)
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            if (elements[i] == value and elements[j] == current_value and value * 10 == current_value)//or (value * 5 == current_value)))
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int pow10(int x)
//{
//    int i = 0;
//    while (pow(10, i) < x)
//    {
//        i++;
//    }
//    if (pow(10, i) == x)
//    {
//        return 3;
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    system("chcp 1251");
//    int same_sum = 0, res = 0, same_count = 0, current_value, value = 0, st;
//    string input, used_letters = "";
//    char last_letter;
//    cin >> input;
//    last_letter = input[0];
//    for (int i = 0; i < input.length(); i++)
//    {
//        switch (input[i])
//        {
//        case 'I':
//            current_value = 1;
//            break;
//        case 'V':
//            current_value = 5;
//            break;
//        case 'X':
//            current_value = 10;
//            break;
//        case 'L':
//            current_value = 50;
//            break;
//        case 'C':
//            current_value = 100;
//            break;
//        case 'D':
//            current_value = 500;
//            break;
//        case 'M':
//            current_value = 1000;
//            break;
//        default:
//            cout << "Неправильно введено число";
//            return 0;
//        }
//        if (i == 0)
//        {
//            st = log10(current_value);
//        }
//        for (int j = 0; j < used_letters.length(); j++)
//        {
//            if (input[i] == used_letters[j] and not (value < current_value and (current_value % 10 == 0)))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        if (last_letter == input[i])
//        {
//            same_count += 1;
//            same_sum += current_value;
//            if (same_count > pow10(current_value))
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        else
//        {
//            if (value < current_value and check_minus(value, current_value) and same_count == 1)
//            {
//                if (same_sum == 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += current_value - same_sum;
//                same_count = 0;
//                same_sum = 0;
//                st = log10(current_value) - 1;
//                used_letters += input[i - 1];
//
//            }
//            else if (value > current_value)
//            {
//                int a = log10(current_value * 2);
//                if (a > st and used_letters.length() != 0)
//                {
//                    cout << "Неправильно введено число";
//                    return 0;
//                }
//                res += same_sum;
//                same_count = 1;
//                st = log10(current_value);
//                same_sum = current_value;
//                used_letters += input[i - 1];
//            }
//            else
//            {
//                cout << "Неправильно введено число";
//                return 0;
//            }
//        }
//        last_letter = input[i];
//        value = current_value;
//    }
//    res += same_sum;
//    cout << res;
//}



//№7

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	int v;
//	cout << "Выберите вариант: 1 или 2\n";
//	cin >> v;
//	switch (v)
//	{
//	case 1:
//	{
//		int m = 37, b = 3, c = 64, s = 0, i, s0 = 0;
//		cout << "Введите i\n";
//		cin >> i;
//		for (int k = 0; k <= i; k++)
//		{
//			s = (m * s0 + b) % c;
//			s0 = s;
//		}
//		cout << s;
//		break;
//	}
//	case 2:
//	{
//		int m2 = 25173, b2 = 13849, c2 = 65537, s2, i2, s02 = 0;
//		cout << "Введите i\n";
//		cin >> i2;
//		for (int k2 = 0; k2 <= i2; k2++)
//		{
//			s2 = (m2 * s02 + b2) % c2;
//			s02 = s2;
//		}
//		cout << s2;
//		break;
//	}
//	default:
//		cout << "Неизвестный вариант";
//	}
//}


//№8

//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	const int stb1 = 4;
//	const int str1 = 3;
//	float A[str1][stb1] = {
//		{(5),(2),(0),(10)},
//		{(3),(5),(2),(5)},
//		{(20),(0),(0),(0)}
//	};
//	const int stb2 = 2;
//	float B[stb1][stb2] = {
//		{(1.2),(0.5)},
//		{(2.8),(0.4)},
//		{(5.0),(1.0)},
//		{(2.0),(1.5)}
//	};
//	float C[str1][stb2];
//	for (int i = 0; i < str1; i++)
//	{
//		for (int j = 0; j < stb2; j++)
//		{
//			C[i][j] = 0;
//			for (int k = 0; k < stb1; k++)
//			{
//				C[i][j] += A[i][k] * B[k][j];
//			}
//		}
//	}
//	float maxpr = 0;
//	float minpr = 100000;
//	int nmaxpr = 0;
//	int nminpr = 0;
//	for (int g = 0; g < str1; g++)
//	{
//		if (C[g][0] > maxpr)
//		{
//			maxpr = C[g][0];
//			nmaxpr = g+1;
//		}
//		if (C[g][0] < minpr)
//		{
//			minpr = C[g][0];
//			nminpr = g+1;
//		}
//	}
//	cout << "1) Максимальная выручка у " << nmaxpr <<" продавца" << endl;
//	cout << "   Минимальная выручка у " << nminpr << " продавца" << endl;
//	float maxk = 0;
//	float mink = 100000;
//	int nmaxk = 0;
//	int nmink = 0;
//	for (int y = 0; y < str1; y++)
//	{
//		if (C[y][1] > maxk)
//		{
//			maxk = C[y][1];
//			nmaxk = y + 1;
//		}
//		if (C[y][1] < mink)
//		{
//			mink = C[y][0];
//			nmink = y + 1;
//		}
//	}
//	cout << "2) Максимальные комиссионные у " << nmaxk << " продавца" << endl;
//	cout << "   Минимальные комиссионные у " << nmink << " продавца" << endl;
//	float sumpr = 0;
//	for (int h = 0; h < str1; h++)
//	{
//		sumpr += C[h][0];
//	}
//	cout << "3) Общая выручка равна " << sumpr << endl;
//	float sumk = 0;
//	for (int d = 0; d < str1; d++)
//	{
//		sumk += C[d][1];
//	}
//	cout << "4) Общие комиссионные равны " << sumk << endl;
//	float sumobsh = 0;
//	for (int t = 0; t < str1; t++)
//	{
//		for (int v = 0; v < stb2; v++)
//		{
//			sumobsh+= C[t][v];
//		}
//	}
//	cout << "5) Общие сумма денег равна " << sumobsh << endl;
//}


//№9

//#include <iostream>
//#include <string>
//                                                                                                                                                                                   //#include <algorithm>
//using namespace std;
//
//int num_to_dec(char num)
//{
//	string all_numbers = "0123456789ABCDEF"; 
//	return all_numbers.find(num);
//}
//
//char dec_to_num(int dec)
//{
//	string all_numbers = "0123456789ABCDEF"; 
//	return all_numbers[dec];
//}
//
//bool is_correct(int CC, string number)
//{
//	if (CC < 2 or CC > 16)
//		return false;
//	string all_numbers = "0123456789ABCDEF"; 
//	all_numbers = all_numbers.substr(0, CC);
//	for (int i = 0; i < number.length(); ++i)
//		if (all_numbers.find(number[i]) == string::npos)                                                                                                                        //if (number[i]>all_numbers.length())   //
//			return false;
//	return true;
//}
//
//string convert_number(string number, int from_CC, int to_CC)
//{
//	int decimal = 0;
//	for (int i = number.length() - 1, st = 0; i >= 0; --i, ++st)
//		decimal += num_to_dec(number[i]) * pow(from_CC, st);
//	string answer = "";
//	while (decimal > 0)
//	{
//		answer += dec_to_num(decimal % to_CC);
//		decimal /= to_CC;
//	}
//	reverse(answer.begin(), answer.end());
//	return answer;
//}
//
//int main()
//{
//	system ("chcp 1251");
//	cout << "Введите число:\n";
//	string number;
//	getline(cin, number);
//	cout << "Введите СС\n ";
//	int CC_1;
//	cin >> CC_1;
//	if (!is_correct(CC_1, number))
//	{
//		cout << "Число и СС некорректны\n";
//		return 0;
//	}
//	cout << "Введите новую СС\n";
//	int CC_2;
//	cin >> CC_2;
//	cout << "Результат перевода " << number << " из СС с основанием " << CC_1 << " в СС с основанием " << CC_2 << " : " << convert_number(number, CC_1, CC_2);
//}




//РИМСКИЕ ЦИФРЫ
#include <iostream>
#include <string>
using namespace std;


void input(string* romanNumber);
int switchRomanToRegular(string romanNumber);
int switchCharToInt(char romanNumber);
void countError(int* answer, char firstRomanNumber, char secondRomanNumber);
int checkTheNumber(string romanNumber);
void output(int answer, string romanNumber);

void main()
{
    string romanNumber;
    input(&romanNumber);
    int flag = checkTheNumber(romanNumber);
    if (flag)
    {
        int answer = switchRomanToRegular(romanNumber);

        output(answer, romanNumber);
    }
    else
    {
        cout << "Incorrect number";
    }

}

void input(string* romanNumber)
{
    cout << "Enter the number" << endl;
    cin >> *romanNumber;
}

int switchCharToInt(char romanNumber)
{
    switch (romanNumber)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}

int switchRomanToRegular(string romanNumber)
{
    int answer = 0;
    for (int i = 0; romanNumber[i]; i++)
    {
        answer += switchCharToInt(romanNumber[i]);
        if (romanNumber[i + 1])
        {
            countError(&answer, romanNumber[i], romanNumber[i + 1]);
        }
    }
    return answer;
}

void countError(int* answer, char firstRomanNumber, char secondRomanNumber)
{
    int firstRegularNumber, secondRegularNumber;
    firstRegularNumber = switchCharToInt(firstRomanNumber);
    secondRegularNumber = switchCharToInt(secondRomanNumber);
    if (firstRegularNumber < secondRegularNumber)
    {
        *answer -= firstRegularNumber * 2;
    }
}

void output(int answer, string romanNumber)
{
    cout << romanNumber << " = " << answer << endl;
}

int checkTheNumber(string romanNumber)
{
    int flag = 1;
    int x = romanNumber.length() - 3;
    int cForD = 0;
    int cForL = 0;
    int cForV = 0;
    for (int i = 0; i < x; i++)
    {
        if (romanNumber[i] == romanNumber[i + 1] && romanNumber[i] == romanNumber[i + 2] && romanNumber[i] == romanNumber[i + 3])
        {
            flag = 0;
        }
    }

    for (int i = 0; romanNumber[i + 1]; i++)
    {
        switch (romanNumber[i])
        {
        case 'I':
        {
            if (romanNumber[i + 1] != 'V' && romanNumber[i + 1] != 'X' && romanNumber[i + 1] != 'I')
            {
                flag = 0;
            }
            else if ((romanNumber[i + 1] != 'I' || romanNumber[i + 2] != 'I') && romanNumber[i + 2])
            {
                flag = 0;
            }
            else if (romanNumber[i + 1] != 'I' && romanNumber[i + 2] == 'I')
            {
                flag = 0;
            }
            break;
        }
        case 'V':
        {
            cForV += 1;
            if (switchCharToInt(romanNumber[i + 1]) >= 5)
            {
                flag = 0;
            }
            break;
        }
        case 'X':
        {
            if (romanNumber[i + 1] == 'D' || romanNumber[i + 1] == 'M')
            {
                flag = 0;
            }
            else if (switchCharToInt(romanNumber[i + 1]) > 10 && romanNumber[i + 2] == 'X')
            {
                flag = 0;
            }
            break;
        }
        case 'L':
        {
            cForL += 1;
            if (switchCharToInt(romanNumber[i + 1]) >= 50)
            {
                flag = 0;
            }
            break;
        }
        case 'C':
        {
            if (switchCharToInt(romanNumber[i + 1]) > 100 && romanNumber[i + 2] == 'C')
            {
                flag = 0;
            }
            break;
        }
        case 'D':
        {
            cForD += 1;
            if (switchCharToInt(romanNumber[i + 1]) >= 500)
            {
                flag = 0;
            }
            break;
        }
        }
    }
    if (romanNumber[romanNumber.length() - 1] == 'D')
    {
        cForD += 1;
    }
    else if (romanNumber[romanNumber.length() - 1] == 'L')
    {
        cForL += 1;
    }
    else if (romanNumber[romanNumber.length() - 1] == 'V')
    {
        cForV += 1;
    }
    if (cForD > 1 || cForL > 1 || cForV > 1)
    {
        flag = 0;
    }

    return flag;
}