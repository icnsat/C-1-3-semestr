#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
const int N = 20;

struct flight
{
	string departure_point;
	string flight_number;
	string arrival_date;
	string arrival_time;
	string arrival_delay;
};

struct table
{
	flight mas[N] = {};
	int n = 0;
	table(int n)
	{
		this -> n = n;
	}
	table() {};
};

void input_table(string file_name, table& tab);
void input_fl(flight& fl);
int input_flight(table& tab);
void input_flight_in_pos(flight fl, int pos, table& tab);
void delete_flight(string num, table& tab, table& arch_tab);
int count_delay(string date, table arch_tab, table tab);
void output_table(table tab);