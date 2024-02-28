#include "ATDdinArray.h"
#include <ctime>

void create_array_din(typeX& a, int n, int m)
{
    a.X = new typeitem* [n];
    a.n = n;
    a.m = m;
    for (int i = 0; i < a.n; i++)
        a.X[i] = new int[m];
}

void input_array_hand_din(typeX& a)
{
    for (int i = 0; i < a.n; i++)
    {
        for (int j = 0; j < a.m; j++)
        {
            cin >> a.X[i][j];
        }
    }
}

void input_array_rand_din(typeX& a)
{
    srand(time(0));
    for (int i = 0; i < a.n; i++)
    {
        for (int j = 0; j < a.m; j++)
        {
            a.X[i][j] = rand();
        }
    }
}

void res_array_din(typeX a, typeX b, typeX& c)
{
    for (int i = 0; i < c.n; i++)
    {
        for (int j = 0; j < c.m; j++)
        {
            c.X[i][j] = a.X[i][j] - b.X[i][j];
        }
    }
}

void output_array_din(typeX c)
{
    for (int i = 0; i < c.n; i++)
    {
        for (int j = 0; j < c.m; j++)
        {
            cout << c.X[i][j] << " ";
        }
        cout << "\n";
    }
}

void deletion_din(typeX& a, typeX& b, typeX& c)
{
    if (a.n != 0)
    {
        for (int i = 0; i < a.n; i++)
        {
            delete[] a.X[i];
        }
        delete[] a.X;
        a.X = nullptr;
    }
    if (b.n != 0)
    {
        for (int i = 0; i < b.n; i++)
        {
            delete[] b.X[i];
        }
        delete[] b.X;
        b.X = nullptr;
    }
    if (c.n != 0)
    {
        for (int i = 0; i < c.n; i++)
        {
            delete[] c.X[i];
        }
        delete[] c.X;
        c.X = nullptr;
    }
}

