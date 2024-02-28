#pragma once
#include <iostream>
using namespace std;
typedef unsigned int typeitem;
const unsigned int N = 100;

struct typeX
{
    unsigned int n = 0;
    typeitem X[N] = {};
};

void input_array_hand(typeX& a, int n);
void input_array_rand(typeX& a, int n);
void output_array(typeX a);
void add_element_after_position(typeX& a, int pos, typeitem value);
void add_element_în_position(typeX& X, int pos, typeitem value);
int count_max_element(typeX a);
bool is_perfect(int element);
void delete_perfect(typeX& a);


