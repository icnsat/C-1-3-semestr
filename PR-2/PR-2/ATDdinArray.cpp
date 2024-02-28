#include "ATDdinArray.h"
#include <ctime>


int input_array_hand(typeX& a, int n)
{
    a.n = n;
    a.X = (typeitem*)malloc(a.n * sizeof(typeitem));
    if (a.X == NULL)
        return 1;
    for (int i = 0; i < a.n; i++)
        cin >> a.X[i];
    return 0;
}

int input_array_rand(typeX& a, int n)
{
    a.n = n;
    a.X = (typeitem*)malloc(a.n * sizeof(typeitem));
    if (a.X == NULL)
        return 1;
    srand(unsigned(time(0)));
    for (int i = 0; i < a.n; i++)
        a.X[i] = rand();
    return 0;
}

void output_array(typeX a)
{
    for (int i = 0; i < a.n; i++)
    {
        cout << a.X[i] << " ";
    }
}

int add_element_after_position(typeX& a, int pos, typeitem value)
{
    if ((a.X = (typeitem*)realloc(a.X, (a.n + 1) * sizeof(typeitem))) == NULL)
        return 1;
    for (int i = a.n; i > pos + 1; i--)
    {
        a.X[i] = a.X[i - 1];
    }
    a.X[pos + 1] = value;
    a.n++;
    return 0;
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
            for (int j = i; j < a.n - 1; j++)
            {
                a.X[j] = a.X[j + 1];
            }
            a.n--;
            i--;
        }
    }
    a.X = (typeitem*)realloc(a.X, (a.n) * sizeof(typeitem));
}

int new_array_perfect(typeX a, typeX& b)
{
    b.X = (typeitem*)malloc(0);
    for (int i = 0; i < a.n; i++) 
    {
        if (is_perfect(a.X[i]))
        {	
            if ((b.X = (typeitem*)realloc(b.X, (b.n + 1) * sizeof(typeitem))) != nullptr)
            {
                b.X[b.n] = a.X[i];
                b.n++;
            }
            else
                return 1;
        }
    }
    return 0;
}

