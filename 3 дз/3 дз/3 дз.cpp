
// 3 блок
// №1
/*#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    float S, p, n;
    cout << "Введите S,p,n\n";
    cin >> S >> p >> n;
    if (p == 0)
    {
        cout << "m=" << S/(n*12);
    }
    else
    {
        float r = (p / 100);
        cout << "m=" << (S * r * (pow(1 + r, n))) / (12 * (pow(1 + r, n) - 1));
    }
}
*/


//№2
/*#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    float S, m, n;
    cout << "Введите S,m,n\n";
    cin >> S >> m >> n;
    if ((S / m) != (12 * n))
    {
        for (double r = 0.0001; r < 1; r += 0.0001)
        {
            double m1 = ((S * r * (pow(1 + r, n))) / (12 * (pow(1 + r, n) - 1)));
            if (abs(m - m1) < 0.1)
            {
                cout << "p=" << 100 * r << endl;
                //break;
            }

        }
    }
    else
    {
        cout << "p=0";
    }

}
*/


// №3 с вводом
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream N;
    N.open("ex3.txt");
    string str;
    cout << "Введите текст\n";
    getline(cin, str);
    N << str;
    N.close();
    ifstream F;
    F.open("ex3.txt");
    char buff[30];
    if (!F.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        F.getline(buff,21);
        cout << buff << endl;
        F.close();
    }
}
*/

// №3 без ввода
/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream N;
    N.open("ex3.txt");
    N << "Работа с файлами C++";
    N.close();
    ifstream F;
    F.open("ex3.txt");
    char buff[21];
    if (!F.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        F.getline(buff,21);
        cout << buff << endl;
        F.close();
    }
}
*/


//№4 старый

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream F("ex4.txt");
    F << "фмо78ыо2788в92ты8";
    F.close();
    ifstream N("ex4.txt");
    if (!N.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        //ifstream N("ex4.txt");
        string str;
        getline(N, str);
        for (int i = 0; i < str.length();i++) //while (!N.eof())
        {
            if (isdigit(str[i]))//(((int)b <= 57) and ((int)b >= 48))
            {
                cout << str[i];
            }

        }
        N.close();
        cout << "Файл может быть открыт";
    }

}
*/

//№4 новый

/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream F("ex4.txt");
    F << "фмо78ыо2788в92ты8";
    F.close();
    ifstream N("ex4.txt");
    if (!N.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        cout << "Файл может быть открыт\n";
        // ifstream N("ex4.txt");
        string str;
        getline(N, str);
        N.close();
        for (int i = 0; i < str.length(); i++) //while (!N.eof())
        {
            if ((int(str[i]) <= 57) and (int(str[i]) >= 48))                                                      //(isdigit(int(str[i]))) //(((int)str[i]<=57) and ((int)str[i] >=48))//isdigit(str[i]))//(((int)b <= 57) and ((int)b >= 48))
            {
                cout << str[i] << endl;
            }
        }

    }

}*/

//#4 эллен

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    string dd, c, co;
//    c = "0123456789";
//    ofstream fo("rrr.txt");
//    cout << "введите";
//    getline(cin, dd);
//    fo << dd;
//   // cout << fo.is_open() << endl;
//    fo.close();
//    ifstream fl("rrr.txt");
//    getline(fl, co);
//   // cout << fl.is_open() << endl;
//    for (int i = 0; i < co.length(); i++)
//    {
//        if (c.find(co[i]) != -1)
//        {
//            cout << co[i];
//        }
//        else
//        {
//            cout << " ";
//        }
//    }
//}

//№4 рандом версия

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    system("chcp 1251");
//    ofstream F("ex4.txt");
//    F << "фмо78ыо2788в92ты8";
//    F.close();
//    ifstream N("ex4.txt");
//    if (!N.is_open())
//    {
//        cout << "Файл не может быть открыт";
//    }
//    else
//    {
//        cout << "Файл может быть открыт\n";
//        // ifstream N("ex4.txt");
//        string str;
//        getline(N, str);
//        N.close();
//        for (int i = 0; i < str.length(); i++) //while (!N.eof())
//        {
//            if ((int(str[i]) <= 57) and (int(str[i]) >= 48))                                                      //(isdigit(int(str[i]))) //(((int)str[i]<=57) and ((int)str[i] >=48))//isdigit(str[i]))//(((int)b <= 57) and ((int)b >= 48))
//            {
//                cout << str[i] << endl;
//            }
//        }
//
//    }
//
//}




//№4 с вводом
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream F("ex4.txt");
    string str;
    cout << "Введите текст\n";
    getline(cin, str);
    F << str;
    F.close();
    ifstream N("ex4.txt");
    if (!N.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if ((int(str[i]) <= 57) and (int(str[i]) >= 48))
            {
                cout << str[i] << endl;
            }
        }

    }

}
*/

//№4 без ввода
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    ofstream F("ex4.txt");
    F << "фмо78ыо2788в92ты8";
    F.close();
    ifstream N("ex4.txt");
    if (!N.is_open())
    {
        cout << "Файл не может быть открыт";
    }
    else
    {
        cout << "Файл может быть открыт\n";
        string str;
        getline(N, str);
        N.close();
        for (int i = 0; i < str.length(); i++)
        {
            if ((int(str[i]) <= 57) and (int(str[i]) >= 48))
            {
                cout << str[i] << endl;
            }
        }

    }

}





//№5 с вводом
/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    string str;
    cout << "Введите 30 букв\n";
    cin >> str;
    if (str.length() != 30)
    {
        cout << "В строке не 30 букв";
    }
    else
    {
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 29; j++)
            {
                if ((int)str[j] > (int)str[j + 1])
                {
                    char d = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = d;
                }
            }
        }
        cout << str;
    }

}
*/

