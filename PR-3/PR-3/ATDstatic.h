#pragma once
#include <iostream>
using namespace std;
typedef int typeitem;
const unsigned int N = 100, M = 100;

struct typeX
{
    int n, m;
    typeitem X[N][M] = {};
    typeX(int n1, int m1)
    {
        n = n1;
        m = m1;
    }
    typeX()
    {
        n = 0;
        m = 0;
    }
};

void input_array_hand(typeX& a, int n, int m);
void input_array_rand(typeX& a, int n, int m);
void res_array(typeX a, typeX b, typeX& c);
void output_array(typeX c);

