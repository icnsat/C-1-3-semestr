#include "ATDstatic.h"
#include <ctime>

void input_array_hand(typeX& a, int n, int m)
{
    a.n = n;
    a.m = m;
    for (int i = 0; i < a.n; i++)
    {
        for (int j = 0; j < a.m; j++)
        {
            cin >> a.X[i][j];
        }
    }
}

void input_array_rand(typeX& a, int n, int m)
{
    srand(time(0));
    a.n = n;
    for (int i = 0; i < a.n; i++)
    {
        for (int j = 0; j < a.m; j++)
        {
            a.X[i][j] = rand();
        }
    }
}

void res_array(typeX a, typeX b, typeX& c) 
{ 
    c.n = a.n; 
    c.m = a.m; 
    for (int i = 0; i < c.n; i++) 
    { 
        for (int j = 0; j < c.m; j++) 
        { 
            c.X[i][j] = a.X[i][j] - b.X[i][j]; 
        } 
    } 
} 



void output_array(typeX c)
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






