// поиск простых чисел//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    int n, all = 0;
//    cout << "Введите конец диапазона" << endl;
//    cin >> n;
//    for (int ch = 2; ch <= n; ch++)
//    {
//        int d = 1, kd = 0;
//        while (d * d < ch)
//        {
//            if (ch % d == 0)
//            {
//                kd += 2;
//            }
//            d += 1;
//        }
//        if (d * d == ch)
//        {
//            kd += 1;
//        }
//        if (kd == 2)
//        {
//            all += 1;
//        }
//    }
//    cout << all;
//}




//.........5 дз...........//


// Алгоритм Евклида //


// деление //

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    int a, b;
//    cout << "Введите два числа" << endl;
//    cin >> a >> b;
//    while (a != 0 and b != 0)
//    {
//        if (a > b)
//        {
//            a = a % b;
//        }
//        else
//        {
//            b = b % a;
//        }
//    }
//    cout << a + b;
//}

// вычитание //

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    int a, b;
//    cout << "Введите два числа" << endl;
//    cin >> a >> b;
//    while (a != b)
//    {
//        if (a > b)
//        {
//            a = a - b;
//        }
//        else
//        {
//            b = b - a;
//        }
//    }
//    cout << a;
//}



//Решето Эратосфена//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	system("chcp 1251");
//	int n;
//	cout << "Введите n" << endl;
//	cin >> n;
//	int *a = new int[n + 1];
//	for (int i = 0; i <= n; i++)
//		a[i] = i;
//	a[1] = 0;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (a[i] != 0)
//		{
//			for (int j = i * i; j <= n; j += i)
//			{
//				a[j] = 0;
//			}
//							
//		}
//			
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (a[i]!=0)
//		{
//			cout << a[i] << endl;
//		}
//	}
//	delete[] a;
//	return 0;
//}


                                                                                                       //Обработка текстовых файлов//


                                                                                                       //4-й вариант//

                                                                                                       //#include <iostream>
                                                                            //#include <fstream>
                                                                            //#include <string>
                                                                            //using namespace std;
                                                                            //int main()
                                                                            //{
                                                                            //	system("chcp 1251");
                                                                            //	ifstream N("ex4.txt");
                                                                            //	if (!N.is_open())
                                                                            //	{
                                                                            //		cout << "Файл не может быть открыт";
                                                                            //	}
                                                                            //	else
                                                                            //	{
                                                                            //		string str, curlen, maxlen;
                                                                            //		cout << "Введите текст\n";
                                                                            //		getline(cin, str);
                                                                            //		for (int i = 0; i < str.length(); i++)
                                                                            //		{
                                                                            //			if (str[i] != ' ' and str[i] != '\n' and str[i] != '\t')
                                                                            //			{
                                                                            //				curlen += 1;
                                                                            //				a[p]
                                                                            //			}
                                                                            //		}
                                                                            //	}
                                                                            //}

                                                                                                       //#include <iostream>
                                                                            //#include <fstream>
                                                                            //#include <string>
                                                                            //using namespace std;
                                                                            //
                                                                            //string get_word(istream &is) 
                                                                            //{
                                                                            //    string w;
                                                                            //    is >> w;
                                                                            //    return w;
                                                                            //}
                                                                            //
                                                                            //int main()
                                                                            //{
                                                                            //    system("chcp 1251");
                                                                            //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                            //    if (!file.is_open()) 
                                                                            //    {
                                                                            //        cerr << "Не удалось открыть файл" << endl;
                                                                            //    }
                                                                            //    else
                                                                            //    {
                                                                            //        string word, max_word;
                                                                            //        int len, max_len = 0;
                                                                            //        while (file)
                                                                            //        {
                                                                            //            word = get_word(file);
                                                                            //            if (word.length() == 0)
                                                                            //                break;
                                                                            //            len = word.length();
                                                                            //            if (len > max_len)  
                                                                            //            {
                                                                            //                max_len = len;
                                                                            //                max_word = word;
                                                                            //            }
                                                                            //        }
                                                                            //
                                                                            //        file.close();
                                                                            //
                                                                            //        cout << "Самое длинное слово:  \"" << max_word << "\"" << endl;
                                                                            //    }
                                                                            //}



//Обработка текстовых файлов//

//4-й вариант//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cerr << "Не удалось открыть файл" << endl;
//    }
//    else
//    {
//        string word, max_word;
//        int len, max_len = 0;
//        while (file)
//        {
//            file >> word;
//            len = word.length();
//            if (len > max_len)
//            {
//                max_len = len;
//                max_word = word;
//            }
//        }
//        file.close();
//        cout << "Самое длинное слово:  \"" << max_word << "\"" << endl;
//        cout << "Его длина равна " << max_len << endl;
//    }
//}


                                                                                                        //34-й вариант//
                                                                                                        //#include <iostream>
                                                                                                        //#include <fstream>
                                                                                                        //#include <string>
                                                                                                        //using namespace std;
                                                                                                        //int main()
                                                                                                        //{
                                                                                                        //    system("chcp 1251");
                                                                                                        //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                        //    if (!file.is_open())
                                                                                                        //    {
                                                                                                        //        cout << "Не удалось открыть файл" << endl;
                                                                                                        //    }
                                                                                                        //    else
                                                                                                        //    {
                                                                                                        //        string phrase;
                                                                                                        //        char letter[1];
                                                                                                        //        cout << "Введите фразу\n";
                                                                                                        //        getline(cin, phrase);
                                                                                                        //        int index = 0,i = 0;
                                                                                                        //        bool check = false;
                                                                                                        //        while (file)
                                                                                                        //        {
                                                                                                        //            for (index + i; i < phrase.length(); i++)
                                                                                                        //            {
                                                                                                        //                file.getline(letter, 1);
                                                                                                        //                cout << letter;
                                                                                                        //                if (*letter != phrase[i])
                                                                                                        //                {
                                                                                                        //                    check = false;
                                                                                                        //                    index += i;
                                                                                                        //                    i = 0;
                                                                                                        //                    break;
                                                                                                        //                }
                                                                                                        //                else
                                                                                                        //                {
                                                                                                        //                    check = true;
                                                                                                        //                }
                                                                                                        //            }
                                                                                                        //            if (check)
                                                                                                        //            {
                                                                                                        //                cout << "Вхождение на позиции " << index << endl;
                                                                                                        //            }
                                                                                                        //        }
                                                                                                        //        file.close();
                                                                                                        //        if (!check)
                                                                                                        //        {
                                                                                                        //            cout << "Фраза не найдена" << endl;
                                                                                                        //        }
                                                                                                        //    }
                                                                                                        //}

                                                                                                        //#include <iostream>
                                                                                                        //#include <fstream>
                                                                                                        //#include <string>
                                                                                                        //using namespace std;
                                                                                                        //int main()
                                                                                                        //{
                                                                                                        //    system("chcp 1251");
                                                                                                        //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                        //    if (!file.is_open())
                                                                                                        //    {
                                                                                                        //        cout << "Не удалось открыть файл" << endl;
                                                                                                        //    }
                                                                                                        //    else
                                                                                                        //    {
                                                                                                        //        string phrase;
                                                                                                        //        char letter[1];
                                                                                                        //        cout << "Введите словосочетание\n";
                                                                                                        //        getline(cin, phrase);
                                                                                                        //        int index = 0,i = 0;
                                                                                                        //        bool check = false;
                                                                                                        //        while (file)
                                                                                                        //        {
                                                                                                        //            for (index + i; i < phrase.length(); i++)
                                                                                                        //            {
                                                                                                        //                file.getline(letter, 1);
                                                                                                        //                cout << letter;
                                                                                                        //                if (*letter != phrase[i])
                                                                                                        //                {
                                                                                                        //                    check = false;
                                                                                                        //                    index += i;
                                                                                                        //                    i = 0;
                                                                                                        //                    break;
                                                                                                        //                }
                                                                                                        //                else
                                                                                                        //                {
                                                                                                        //                    check = true;
                                                                                                        //                }
                                                                                                        //            }
                                                                                                        //            if (check)
                                                                                                        //            {
                                                                                                        //                cout << "Вхождение на позиции " << index << endl;
                                                                                                        //            }
                                                                                                        //        }
                                                                                                        //        file.close();
                                                                                                        //        if (!check)
                                                                                                        //        {
                                                                                                        //            cout << "Фраза не найдена" << endl;
                                                                                                        //        }
                                                                                                        //    }
                                                                                                        //}

                                                                                                        //#include <iostream>
                                                                                                        //#include <fstream>
                                                                                                        //#include <string>
                                                                                                        //using namespace std;
                                                                                                        //int main()
                                                                                                        //{
                                                                                                        //    system("chcp 1251");
                                                                                                        //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                        //    if (!file.is_open())
                                                                                                        //    {
                                                                                                        //        cout << "Не удалось открыть файл" << endl;
                                                                                                        //    }
                                                                                                        //    else
                                                                                                        //    {
                                                                                                        //        string phrase, line;
                                                                                                        //        cout << "Введите словосочетание: ";
                                                                                                        //        getline(cin, phrase);
                                                                                                        //        int count = 0;
                                                                                                        //        while (file)
                                                                                                        //        {
                                                                                                        //            getline(file, line);
                                                                                                        //            if (line.find(phrase, 0) != string::npos)
                                                                                                        //            {
                                                                                                        //                count += 1;
                                                                                                        //            }
                                                                                                        //        }
                                                                                                        //        file.close();
                                                                                                        //        cout << "Количество строк со словосочетанием: "<< count << endl;
                                                                                                        //    }
                                                                                                        //}

                                                                                                        //#include <iostream>
                                                                                                        //#include <fstream>
                                                                                                        //#include <string>
                                                                                                        //using namespace std;
                                                                                                        //int main()
                                                                                                        //{
                                                                                                        //    system("chcp 1251");
                                                                                                        //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                        //    if (!file.is_open())
                                                                                                        //    {
                                                                                                        //        cout << "Не удалось открыть файл" << endl;
                                                                                                        //    }
                                                                                                        //    else
                                                                                                        //    {
                                                                                                        //        string phrase, line;
                                                                                                        //        cout << "Введите словосочетание: ";
                                                                                                        //        getline(cin, phrase);
                                                                                                        //        int count = 0;
                                                                                                        //        while (file)
                                                                                                        //        {
                                                                                                        //            //int prev_index = -2;
                                                                                                        //            int i = 0;
                                                                                                        //            getline(file, line);
                                                                                                        //            cout << line << endl;
                                                                                                        //            for (int i = line.find(phrase, i++); i != string::npos; i = line.find(phrase, i + 1))
                                                                                                        //                cout << i << endl;
                                                                                                        //
                                                                                                        //            //cout << line;
                                                                                                        //            /*for (int index = 0; index < line.length(); index++)
                                                                                                        //            {
                                                                                                        //                if (line.find(phrase, index) != string::npos)
                                                                                                        //                {
                                                                                                        //                    if (line.find(phrase, index) != prev_index)
                                                                                                        //                    {
                                                                                                        //                        count += 1;
                                                                                                        //                        prev_index = index;
                                                                                                        //                    }
                                                                                                        //                    
                                                                                                        //                }
                                                                                                        //            }
                                                                                                        //            cout << count;*/
                                                                                                        //        }
                                                                                                        //        file.close();
                                                                                                        //        cout << "Количество словосочетаний в файле: " << count << endl;
                                                                                                        //    }
                                                                                                        //}
                                                                                                        // 
                                                                                                        // 


//34-й вариант//

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cout << "Не удалось открыть файл" << endl;
//    }
//    else
//    {
//        string phrase, line;
//        cout << "Введите словосочетание: ";
//        getline(cin, phrase);
//        cout << "\nПоиск:\n";
//        int count = 0, line_number = 0;
//        while (file)
//        {
//            line_number += 1;
//            int index = 0;
//            getline(file, line);
//            for (int i = 0; i<=1024;i++)
//            {
//                if (line.find(phrase, index) != string::npos)
//                {
//                        count += 1;
//                        cout << "Строка " << line_number << ", позиция "<< line.find(phrase, index)<<endl;
//                        index = line.find(phrase, index)+phrase.length();
//                }
//                else
//                {
//                    break;
//                }
//            }
//        }
//        file.close();
//        cout << "\nВсего словосочетаний в файле: " << count << endl;
//    }
//}



//Ряды//

//4-й вариант//

//#include <iostream>
//using namespace std;
//
//int factorial(int k)
//{
//    if (k == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return k * factorial(k - 1);
//    }
//}
//
//double zsumm(int k)
//{
//    double drsumm = 0;
//    for (double y = 1; y <= k; y++)
//    {
//        drsumm +=(pow(-1, y + 1) /y);
//    }
//    return drsumm;
//}
//
//int main()
//{
//    system("chcp 1251");
//    int n;
//    cout << "Enter n\n";
//    cin >> n;
//    double sum = 0;
//    for (int k = 1; k <= n; k++)
//    {
//        sum += ((factorial(k)) / zsumm(k));
//    }
//    cout << "y = " << sum;
//}


//34 вариант//

//#include <iostream>
//#include <string>;
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    string all_letters = "студенчво";
//    string find_letters = "";
//    string new_string;
//    cout << "Enter string\n";
//    getline(cin,new_string);
//    for (int i = 0; i <= new_string.length(); i++)
//    {   
//        if (all_letters.find(new_string[i]) != string::npos and find_letters.find(new_string[i]) == string::npos)
//        {
//            find_letters += new_string[i];
//            cout << find_letters << endl;
//        }
//    }
//    if (find_letters.length() == all_letters.length())
//    {
//        cout << "String contains all letters";
//    }
//    else
//    {
//        cout << "String doesn't contain all letters";
//    }
//}


//Файлы//

//4 вариант//

                                                                                                                                                                                    //ввод с консоли и сортировка

                                                                                                                                                                                    //#include <iostream>
                                                                                                                                                                                    //#include <string>
                                                                                                                                                                                    //
                                                                                                                                                                                    //using namespace std;
                                                                                                                                                                                    //
                                                                                                                                                                                    //int main()
                                                                                                                                                                                    //{
                                                                                                                                                                                    //    system("chcp 1251");
                                                                                                                                                                                    //    string str[5],switched;
                                                                                                                                                                                    //    for (int i = 0; i < 5; i++)
                                                                                                                                                                                    //    {
                                                                                                                                                                                    //        getline(cin, str[i]);
                                                                                                                                                                                    //    }
                                                                                                                                                                                    //    for (int i = 0; i < 5; i++)
                                                                                                                                                                                    //    {
                                                                                                                                                                                    //        for (int j = i + 1; j < 5; j++)
                                                                                                                                                                                    //        {
                                                                                                                                                                                    //            if (str[i] > str[j])
                                                                                                                                                                                    //            {
                                                                                                                                                                                    //                switched = str[i];
                                                                                                                                                                                    //                str[i] = str[j];
                                                                                                                                                                                    //                str[j] = switched;
                                                                                                                                                                                    //            }
                                                                                                                                                                                    //        }
                                                                                                                                                                                    //    }
                                                                                                                                                                                    //    for (int i = 0; i < 5; i++)
                                                                                                                                                                                    //    {
                                                                                                                                                                                    //        cout << str[i] << endl;
                                                                                                                                                                                    //    }
                                                                                                                                                                                    //}

                                                                                                                                                                                    //без ввода нового слова//

                                                                                                                                                                                    //#include <iostream>
                                                                                                                                                                                    //#include <string>
                                                                                                                                                                                    //#include <fstream>
                                                                                                                                                                                    //
                                                                                                                                                                                    //using namespace std;
                                                                                                                                                                                    //
                                                                                                                                                                                    //int main()
                                                                                                                                                                                    //{
                                                                                                                                                                                    //    system("chcp 1251");
                                                                                                                                                                                    //    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                                                                                                    //    if (!file.is_open())
                                                                                                                                                                                    //    {
                                                                                                                                                                                    //        cout << "Не удалось открыть файл";
                                                                                                                                                                                    //    }
                                                                                                                                                                                    //    else 
                                                                                                                                                                                    //    {
                                                                                                                                                                                    //        int lines = 0;
                                                                                                                                                                                    //        string st;
                                                                                                                                                                                    //        while (getline(file, st))
                                                                                                                                                                                    //        {
                                                                                                                                                                                    //            lines += 1;
                                                                                                                                                                                    //        }
                                                                                                                                                                                    //        ifstream another("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                                                                                                    //        string* str = new string [lines];
                                                                                                                                                                                    //        string switched, r;
                                                                                                                                                                                    //        for (int i = 0; i < lines; i++)
                                                                                                                                                                                    //        {
                                                                                                                                                                                    //            getline(another, str[i]);
                                                                                                                                                                                    //        }
                                                                                                                                                                                    //        for (int i = 0; i < lines; i++)
                                                                                                                                                                                    //        {
                                                                                                                                                                                    //            for (int j = i + 1; j < lines; j++)
                                                                                                                                                                                    //            {
                                                                                                                                                                                    //                if (str[i] > str[j])
                                                                                                                                                                                    //                {
                                                                                                                                                                                    //                    switched = str[i];
                                                                                                                                                                                    //                    str[i] = str[j];
                                                                                                                                                                                    //                    str[j] = switched;
                                                                                                                                                                                    //                }
                                                                                                                                                                                    //            }
                                                                                                                                                                                    //        }
                                                                                                                                                                                    //        ofstream XD("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
                                                                                                                                                                                    //        for (int i = 0; i < lines; i++)
                                                                                                                                                                                    //        {
                                                                                                                                                                                    //            XD << str[i];
                                                                                                                                                                                    //           // cout << str[i] << endl;
                                                                                                                                                                                    //
                                                                                                                                                                                    //        }
                                                                                                                                                                                    //        
                                                                                                                                                                                    //    }   
                                                                                                                                                                                    //}


// /не/ итоговый ужас//

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cout << "Error\n";
//    }
//    else
//    {
//        int lines = 0;
//        string st,switched,word;
//        while (getline(file, st))
//        {
//            lines += 1;
//        }
//        file.close();
//        ifstream another("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        string* str = new string[lines];
//        for (int i = 0; i < lines; i++)
//        {
//            getline(another, str[i],'\n');
//        }
//        for (int i = 0; i < lines; i++)
//        {
//            for (int j = i + 1; j < lines; j++)
//            {
//                if (str[i] > str[j])
//                {
//                    switched = str[i];
//                    str[i] = str[j];
//                    str[j] = switched;
//                }
//            }
//        }
//        another.close();
//        ofstream XD("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        for (int i = 0; i < lines; i++)
//        {
//            XD << str[i];
//            XD << "\n";
//        }
//        XD.close();
//        cout << "Enter word\n";
//        cin >> word;
//        ofstream XXD("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt", ios::app);
//        XXD << word;
//        lines += 2;
//        XXD.close();
//        ifstream another1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        string* str1 = new string[lines];
//        for (int i = 0; i < lines; i++)
//        {
//            getline(another1, str1[i], '\n');
//        }
//        for (int i1 = 0; i1 < lines; i1++)
//        {
//            for (int j1 = i1 + 1; j1 < lines; j1++)
//            {
//                if (str1[i1] > str1[j1])
//                {
//                    switched = str1[i1];
//                    str1[i1] = str1[j1];
//                    str1[j1] = switched;
//                }
//            }
//        }
//        another1.close();
//        ofstream XD1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        for (int i1 = 0; i1 < lines; i1++)
//        {
//            XD1 << str1[i1];
//            XD1 << "\n";
//        }
//        XD1.close();
//    }
//}                      

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cout << "Error\n";
//    }
//    else
//    {
//        int lines = 0;
//        string st,switched,word;
//        while (getline(file, st))
//        {
//            lines += 1;
//        }
//        file.close();
//        ifstream another("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        string* str = new string[lines];
//        for (int i = 0; i < lines; i++)
//        {
//            getline(another, str[i],'\n');
//        }
//        for (int i = 0; i < lines; i++)
//        {
//            for (int j = i + 1; j < lines; j++)
//            {
//                if (str[i] > str[j])
//                {
//                    switched = str[i];
//                    str[i] = str[j];
//                    str[j] = switched;
//                }
//            }
//        }
//        another.close();
//        ofstream XD("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        for (int i = 0; i < lines; i++)
//        {
//            XD << str[i];
//            XD << "\n";
//        }
//        XD.close();
//        cout << "Enter word\n";
//        cin >> word;
//        ofstream XXD("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt", ios::app);
//        XXD << word;
//        lines += 2;
//        XXD.close();
//        ifstream another1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        string* str1 = new string[lines];
//        for (int i = 0; i < lines; i++)
//        {
//            getline(another1, str1[i], '\n');
//        }
//        for (int i1 = 0; i1 < lines; i1++)
//        {
//            for (int j1 = i1 + 1; j1 < lines; j1++)
//            {
//                if (str1[i1] > str1[j1])
//                {
//                    switched = str1[i1];
//                    str1[i1] = str1[j1];
//                    str1[j1] = switched;
//                }
//            }
//        }
//        another1.close();
//        ofstream XD1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//        for (int i1 = 0; i1 < lines; i1++)
//        {
//            XD1 << str1[i1];
//            XD1 << "\n";
//        }
//        XD1.close();
//    }
//}


//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    int i = 0, index, lines = 0;
//    while (i != -1)
//    {
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        switch (index)
//        {
//        case 1:
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            file1 << w << "\n";
//            break;
//        }
//        case 0:
//            i = -1;
//            break;
//        default:
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Enter word\n";
//    cin >> word;
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream another1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(another1, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    another1.close();
//    ofstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file5 << str1[i1] << "\n";
//    }
//    file5.close();
//}



//.........5 дз...........//


// Алгоритм Евклида //

// деление //

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    int a, b;
//    cout << "Введите два числа" << endl;
//    cin >> a >> b;
//    while (a != 0 and b != 0)
//    {
//        if (a > b)
//        {
//            a = a % b;
//        }
//        else
//        {
//            b = b % a;
//        }
//    }
//    cout << a + b;
//}

// вычитание //

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251");
//    int a, b;
//    cout << "Введите два числа" << endl;
//    cin >> a >> b;
//    while (a != b)
//    {
//        if (a > b)
//        {
//            a = a - b;
//        }
//        else
//        {
//            b = b - a;
//        }
//    }
//    cout << a;
//}



//Решето Эратосфена//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	system("chcp 1251");
//	int n;
//	cout << "Введите n" << endl;
//	cin >> n;
//	int *a = new int[n + 1];
//	for (int i = 0; i <= n; i++)
//		a[i] = i;
//	a[1] = 0;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (a[i] != 0)
//		{
//			for (int j = i * i; j <= n; j += i)
//			{
//				a[j] = 0;
//			}
//							
//		}
//			
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (a[i]!=0)
//		{
//			cout << a[i] << endl;
//		}
//	}
//	delete[] a;
//	return 0;
//}



//Обработка текстовых файлов//

//4-й вариант//

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cout << "Не удалось открыть файл" << endl;
//    }
//    else
//    {
//        string word, max_word;
//        int len, max_len = 0;
//        while (file)
//        {
//            file >> word;
//            len = word.length();
//            if (len > max_len)
//            {
//                max_len = len;
//                max_word = word;
//            }
//        }
//        file.close();
//        cout << "Самое длинное слово:  \"" << max_word << "\"" << endl;
//        cout << "Его длина равна " << max_len << endl;
//    }
//}


//34-й вариант//

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ifstream file("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text.txt");
//    if (!file.is_open())
//    {
//        cout << "Не удалось открыть файл" << endl;
//    }
//    else
//    {
//        string phrase, line;
//        cout << "Введите словосочетание: ";
//        getline(cin, phrase);
//        cout << "\nПоиск:\n";
//        int count = 0, line_number = 0;
//        while (file)
//        {
//            line_number += 1;
//            int index = 0;
//            getline(file, line);
//            for (int i = 0; i<=line.length();i++)  //наверное надо <, а не <=
//            {
//                if (line.find(phrase, index) != string::npos)
//                {
//                        count += 1;
//                        cout << "Строка " << line_number << ", позиция "<< line.find(phrase, index)<<endl;
//                        index = line.find(phrase, index)+phrase.length();
//                }
//                else
//                {
//                    break;
//                }
//            }
//        }
//        file.close();
//        cout << "\nВсего словосочетаний в файле: " << count << endl;
//    }
//}



//Ряды//

//4-й вариант//

//#include <iostream>
//using namespace std;
//
//int factorial(int k)
//{
//    if (k == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return k * factorial(k - 1);
//    }
//}
//
//double zsumm(int k)
//{
//    double drsumm = 0;
//    for (double y = 1; y <= k; y++)
//    {
//        drsumm +=(pow(-1, y + 1) /y);
//    }
//    return drsumm;
//}
//
//int main()
//{
//    system("chcp 1251");
//    int n;
//    cout << "Enter n\n";
//    cin >> n;
//    double sum = 0;
//    for (int k = 1; k <= n; k++)
//    {
//        sum += ((factorial(k)) / zsumm(k));
//    }
//    cout << "y = " << sum;
//}

//34 вариант//

#include <iostream>
#include <string>;
using namespace std;

int main()
{
    system("chcp 1251");
    string all_letters = "студенчeство";
    string find_letters = "";
    string new_string;
    cout << "Введите строку\n";
    getline(cin,new_string);
    for (int i = 0; i <= new_string.length(); i++)
    {   
        if (all_letters.find(new_string[i]) != string::npos and find_letters.find(new_string[i]) == string::npos)
        {
            find_letters += new_string[i];
        }
    }
    if (find_letters.length() == (all_letters.length()-3))
    {
        cout << "\nВ строке содержатся все символы\n";
    }
    else
    {
        cout << "\nВ строке не содержатся все символы\n";
    }
}



//Файлы//


//4 вариант//                        


//без tolower

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0,lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49)
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}


//с switch case

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, index, lines = 0;
//    while (i != -1)
//    {
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        switch (index)
//        {
//        case 1:
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            file1 << w << "\n";
//            break;
//        }
//        case 0:
//            i = -1;
//            break;
//        default:
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Enter word\n";
//    cin >> word;
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}


//без cin.good()

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48) //+ длина строки
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49)//+ длина строки
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; w[i]; i++)
//            {
//                w[i] = tolower(w[i]);
//            }
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}


// не итог

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//char to_lower(char r)
//{
//    switch (r)
//    {
//    case 'А': r = 'а'; break;
//    case 'Б': r = 'б'; break;
//    case 'В': r = 'в'; break;
//    case 'Г': r = 'г'; break;
//    case 'Д': r = 'д'; break;
//    case 'Е': r = 'е'; break;
//    case 'Ё': r = 'ё'; break;
//    case 'Ж': r = 'ж'; break;
//    case 'З': r = 'з'; break;
//    case 'И': r = 'и'; break;
//    case 'Й': r = 'й'; break;
//    case 'К': r = 'к'; break;
//    case 'Л': r = 'л'; break;
//    case 'М': r = 'м'; break;
//    case 'Н': r = 'н'; break;
//    case 'О': r = 'о'; break;
//    case 'П': r = 'п'; break;
//    case 'Р': r = 'р'; break;
//    case 'С': r = 'с'; break;
//    case 'Т': r = 'т'; break;
//    case 'У': r = 'у'; break;
//    case 'Ф': r = 'ф'; break;
//    case 'Х': r = 'х'; break;
//    case 'Ц': r = 'ц'; break;
//    case 'Ч': r = 'ч'; break;
//    case 'Ш': r = 'ш'; break;
//    case 'Щ': r = 'щ'; break;
//    case 'Ъ': r = 'ъ'; break;
//    case 'Ы': r = 'ы'; break;
//    case 'Ь': r = 'ь'; break;
//    case 'Э': r = 'э'; break;
//    case 'Ю': r = 'ю'; break;
//    case 'Я': r = 'я'; break;
//    }
//    return (r);
//}
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length() == 1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length() == 1)
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; i < w.length(); i++)
//            {
//                w[i] = to_lower(w[i]);
//            }
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    for (int i = 0; i < word.length(); i++)
//    {
//        word[i] = to_lower(word[i]);
//    }
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}


//какой-то варик последней задачи хз

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0,lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length()==1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length()==1)
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; i<w.length(); i++)
//            {
//                w[i] = toupper(w[i]);
//            }
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    for (int i = 0; i < word.length(); i++)
//    {
//        word[i] = toupper(word[i]);
//    }
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}


// без tolower и без проверки

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length() == 1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length() == 1)
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}



// без tolower и с проверкой

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    bool func = true, funk = true;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length() == 1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length() == 1)
//        {
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; i < w.length(); i++)
//            {
//                if (!((int(w[i]) >= -32) and (int(w[i]) <= -1)))
//                {
//                    cout << "Неверное слово\n";
//                    func = false;
//                    break;
//                }
//            }
//            if (func)
//            {
//                ++lines;
//                file1 << w << "\n";
//            }
//            func = true;
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    func = true;
//    while (funk)
//    {
//        cout << "Введите слово\n";
//        cin >> word;
//        for (int i = 0; i < word.length(); i++)
//        {
//            if (!((int(word[i]) >= -32) and (int(word[i]) <= -1)))
//            {
//                cout << "Неверное слово\n";
//                func = false;
//                break;
//            }
//        }
//        if (func)
//        {
//            funk = false;
//            file1 << word << "\n";
//        }
//        func = true;
//    }
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}



// с tolower и без проверки

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//char to_lower(char r)
//{
//    switch (r)
//    {
//    case 'А': r = 'а'; break;
//    case 'Б': r = 'б'; break;
//    case 'В': r = 'в'; break;
//    case 'Г': r = 'г'; break;
//    case 'Д': r = 'д'; break;
//    case 'Е': r = 'е'; break;
//    case 'Ё': r = 'ё'; break;
//    case 'Ж': r = 'ж'; break;
//    case 'З': r = 'з'; break;
//    case 'И': r = 'и'; break;
//    case 'Й': r = 'й'; break;
//    case 'К': r = 'к'; break;
//    case 'Л': r = 'л'; break;
//    case 'М': r = 'м'; break;
//    case 'Н': r = 'н'; break;
//    case 'О': r = 'о'; break;
//    case 'П': r = 'п'; break;
//    case 'Р': r = 'р'; break;
//    case 'С': r = 'с'; break;
//    case 'Т': r = 'т'; break;
//    case 'У': r = 'у'; break;
//    case 'Ф': r = 'ф'; break;
//    case 'Х': r = 'х'; break;
//    case 'Ц': r = 'ц'; break;
//    case 'Ч': r = 'ч'; break;
//    case 'Ш': r = 'ш'; break;
//    case 'Щ': r = 'щ'; break;
//    case 'Ъ': r = 'ъ'; break;
//    case 'Ы': r = 'ы'; break;
//    case 'Ь': r = 'ь'; break;
//    case 'Э': r = 'э'; break;
//    case 'Ю': r = 'ю'; break;
//    case 'Я': r = 'я'; break;
//    }
//    return (r);
//}
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length() == 1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length() == 1)
//        {
//            ++lines;
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; i < w.length(); i++)
//            {
//                w[i] = to_lower(w[i]);
//            }
//            file1 << w << "\n";
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    cout << "Введите слово\n";
//    cin >> word;
//    for (int i = 0; i < word.length(); i++)
//    {
//        word[i] = to_lower(word[i]);
//    }
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}



// с tolower и с проверкой - бомба все проверки

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//char to_lower(char r)
//{
//    switch (r)
//    {
//    case 'А': r = 'а'; break;
//    case 'Б': r = 'б'; break;
//    case 'В': r = 'в'; break;
//    case 'Г': r = 'г'; break;
//    case 'Д': r = 'д'; break;
//    case 'Е': r = 'е'; break;
//    case 'Ё': r = 'ё'; break;
//    case 'Ж': r = 'ж'; break;
//    case 'З': r = 'з'; break;
//    case 'И': r = 'и'; break;
//    case 'Й': r = 'й'; break;
//    case 'К': r = 'к'; break;
//    case 'Л': r = 'л'; break;
//    case 'М': r = 'м'; break;
//    case 'Н': r = 'н'; break;
//    case 'О': r = 'о'; break;
//    case 'П': r = 'п'; break;
//    case 'Р': r = 'р'; break;
//    case 'С': r = 'с'; break;
//    case 'Т': r = 'т'; break;
//    case 'У': r = 'у'; break;
//    case 'Ф': r = 'ф'; break;
//    case 'Х': r = 'х'; break;
//    case 'Ц': r = 'ц'; break;
//    case 'Ч': r = 'ч'; break;
//    case 'Ш': r = 'ш'; break;
//    case 'Щ': r = 'щ'; break;
//    case 'Ъ': r = 'ъ'; break;
//    case 'Ы': r = 'ы'; break;
//    case 'Ь': r = 'ь'; break;
//    case 'Э': r = 'э'; break;
//    case 'Ю': r = 'ю'; break;
//    case 'Я': r = 'я'; break;
//    }
//    return (r);
//}
//
//void gnomeSort(string arr[], int n)
//{
//    int index = 1;
//    while (index < n)
//    {
//        if (arr[index] >= arr[index - 1])
//        {
//            index++;
//        }
//        else
//        {
//            swap(arr[index], arr[index - 1]);
//            index--;
//        }
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//    ofstream file1("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    int i = 0, lines = 0;
//    bool func = true, funk = true;
//    while (i != -1)
//    {
//        string index;
//        cout << "Добавить слово - 1, начать сортировку - 0\n";
//        cin >> index;
//        if (int(index[0]) == 48 and index.length() == 1)
//        {
//            i = -1;
//            break;
//        }
//        else if (int(index[0]) == 49 and index.length() == 1)
//        {
//            string w;
//            cout << "Введите слово\n";
//            cin >> w;
//            for (int i = 0; i < w.length(); i++)
//            {
//                w[i] = to_lower(w[i]);
//            }
//            for (int i = 0; i < w.length(); i++)
//            {
//                if (!((int(w[i]) >= -32) and (int(w[i]) <= -1)))
//                {
//                    cout << "Неверное слово\n";
//                    func = false;
//                    break;
//                }
//            }
//            if (func)
//            {
//                ++lines;
//                file1 << w << "\n";
//            }
//            func = true;
//        }
//        else
//        {
//            cout << "Неверный номер\n";
//        }
//    }
//    file1.close();
//    ifstream file2("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file2, str[i]);
//    }
//    gnomeSort(str, lines);
//    file2.close();
//    ofstream file3("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i = 0; i < lines; i++)
//    {
//        file3 << str[i] << "\n";
//    }
//    file3.close();
//    string word;
//    while (funk)
//    {
//        funk = true;
//        cout << "Введите слово\n";
//        cin >> word;
//        for (int i = 0; i < word.length(); i++)
//        {
//            word[i] = to_lower(word[i]);
//        }
//        for (int i = 0; i < word.length(); i++)
//        {
//            if (!((int(word[i]) >= -32) and (int(word[i]) <= -1)))
//            {
//                cout << "Неверное слово\n";
//                func = false;
//                break;
//            }
//        }
//        if (func)
//        {
//            funk = false;
//            file1 << word << "\n";
//        }
//        func = true;
//    }
//    ofstream file4("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt", ios::app);
//    file4 << word;
//    lines += 1;
//    file4.close();
//    ifstream file5("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    string* str1 = new string[lines];
//    for (int i = 0; i < lines; i++)
//    {
//        getline(file5, str1[i], '\n');
//    }
//    gnomeSort(str1, lines);
//    file5.close();
//    ofstream file6("C:\\Users\\eliza\\OneDrive\\Рабочий стол\\text1.txt");
//    for (int i1 = 0; i1 < lines; i1++)
//    {
//        file6 << str1[i1] << "\n";
//    }
//    file6.close();
//}