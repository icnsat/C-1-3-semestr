#include "ATD.h"
#include <ctime>


void input_array_hand(typeX& a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a.X[i];
    a.n = n;
}

void input_array_rand(typeX& a, int n)
{
        srand(time(0));
        for (int i = 0; i < n; i++)
            a.X[i] = rand();
        a.n = n;
}

void output_array(typeX a)
{
    for (int i = 0; i < a.n; i++)
        cout << a.X[i] << " ";
}


void add_element_after_position(typeX& a, int pos, typeitem value)
{
    for (int i = a.n; i > pos+1; i--)
    {
        a.X[i] = a.X[i - 1];
    }
    a.X[pos + 1] = value;
    a.n += 1;
}

void add_element_în_position(typeX& a, int pos, typeitem value)
{
    for (int i = a.n; i > pos; i--)
    {
        a.X[i] = a.X[i - 1];
    }
    a.X[pos] = value;
    a.n += 1;
}


int count_max_element(typeX a)
{
    typeitem max_element = 0;
    int count = 0;
    for (int i = 0; i < a.n; i++)
    {
        if (a.X[i] > max_element)
        {
            max_element = a.X[i];
            count = 1;
        }
        else if (a.X[i] == max_element)
        {
            count += 1;
        }
    }
    return count;
}

bool is_perfect(int element)
{
    if (element == 0)
        return false;
    int sum = 0;
    for (int j = 1; j <= element / 2; j++)
    {
        if (element % j == 0)
        {
            sum += j;
        }
    }
    return sum == element;
}


void delete_perfect(typeX& a)
{
    for (int i = 0; i < a.n; i++)
    {
        if (is_perfect(a.X[i]))
        {
            for (int j = i; j < a.n-1; j++)
            {
                a.X[j] = a.X[j + 1];
            }
            a.n --;
            i--;
        }
    }
}

void delete_el()