#pragma once
#include <iostream>
#include <vector>
#include"stdlib.h"
using namespace std;
typedef int typeitem;

struct typeX
{
	int n = 0;
	vector<typeitem> X;
};

void input_array_hand_V(typeX& a, int n);
void input_array_rand_V(typeX& a, int n);
void output_array_V(typeX a);
int count_max_element_V(typeX a);
bool is_perfect_V(int element);
void delete_perfect_V(typeX& a);
void new_array_perfect_V(typeX a, typeX& b);


