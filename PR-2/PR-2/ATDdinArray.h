#pragma once
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6308)
#endif
#include <iostream>
#include"stdlib.h"
using namespace std;
typedef int typeitem;

struct typeX
{
	int n = 0;
	typeitem* X = nullptr;
};

int input_array_hand(typeX& a, int n);
int input_array_rand(typeX& a, int n);
void output_array(typeX a);
int add_element_after_position(typeX& a, int pos, typeitem value);
int count_max_element(typeX a);
bool is_perfect(int element);
void delete_perfect(typeX& a);
int new_array_perfect(typeX a, typeX& b);
