#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

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
	vector <flight> vec;
	table() {};
};

void input_table_vec(string file_name, table& tab);
void input_fl_vec(flight& fl);
int input_flight_vec(table& tab);
void delete_flight_vec(string num, table& tab, table& arch_tab);
int count_delay_vec(string date, table arch_tab, table tab);
void output_table_vec(table tab);