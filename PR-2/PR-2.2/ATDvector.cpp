#include "ATDvector.h"
#include <ctime>


void input_array_hand_V(typeX& a, int n)
{
    a.n = n;
    int val = 0;
    for (int i = 0; i < a.n; i++)
    {
        cin >> val;
        a.X.push_back(val);
    }
        
}

void input_array_rand_V(typeX& a, int n)
{
    a.n = n;
    srand(unsigned(time(0)));
    for (int i = 0; i < a.n; i++)
        a.X.push_back(rand());
}

void output_array_V(typeX a)
{
    for (int i = 0; i < a.n; i++)
    {
        cout << a.X[i] << " ";
    }
}

//void add_element_after_position_V(typeX& a, int pos, typeitem value)
//{
//    a.n++;
//    a.X.resize(a.n);
//    for (int i = a.n-1; i > pos + 1; i--)
//    {
//        a.X[i] = a.X[i - 1];
//    }
//    a.X[pos + 1] = value;
//}

int count_max_element_V(typeX a)
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

bool is_perfect_V(int element)
{
    if (element == 0)
        return false;
    typeitem sum = 0;
    for (int j = 1; j <= element / 2; j++)
    {
        if (element % j == 0)
        {
            sum += j;
        }
    }
    return sum == element;
}

void delete_perfect_V(typeX& a)
{
    for (int i = 0; i < a.n; i++)
    {
        if (is_perfect_V(a.X[i]))
        {
            a.X.erase(a.X.begin()+i);
            a.n--;
            i--;
        }
    }
}

void new_array_perfect_V(typeX a, typeX& b)
{
    for (int i = 0; i < a.n; i++)
    {
        if (is_perfect_V(a.X[i]))
        {
            b.X.push_back(a.X[i]);
        }
    }
    b.n = b.X.size();
}

