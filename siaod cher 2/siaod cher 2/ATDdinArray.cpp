#include "ATDdinArray.h"
#include <ctime>

int create(int*& x, int n)
{
    cout << 5;
    return 0;
}

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
    srand(time(0));
    for (int i = 0; i < a.n; i++)
        a.X[i] = rand();
    return 0;
}

void output_array(typeX a)
{

}

void add_element_after_position(typeX& a, int pos, int value)
{
}

int count_max_element(typeX& a)
{
    return 0;
}

bool is_perfect(int element)
{
    return false;
}

void delete_perfect(typeX& a)
{
}
