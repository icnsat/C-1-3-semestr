#pragma once
#include <iostream>
using namespace std;
typedef int typeitem;

struct typeX
{
    int n = 0, m = 0;
    typeitem** X = nullptr;
};

void create_array_din(typeX& a, int n, int m);
void input_array_hand_din(typeX& a);
void input_array_rand_din(typeX& a);
void res_array_din(typeX a, typeX b, typeX& c);
void output_array_din(typeX c);
void deletion_din(typeX& a, typeX& b, typeX& c);

