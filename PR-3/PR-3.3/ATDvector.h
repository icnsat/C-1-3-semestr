#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct points_set
{
	int n = 0;
	vector<vector<int>> points;
};

void input_points_hand(points_set& a, int n1);
void input_points_rand(points_set& a, int n1);
void output_points(points_set a);
double get_dist(const vector<int> A, const vector<int> B);
double triangle_area(const vector<int> A, const vector<int> B, const vector<int> C);
bool isSquare(const vector<int> A, const vector<int> B, const vector<int> C, const vector<int> D);
double get_angle(const vector<int> A, const vector<int> B);
bool inSquare(points_set& pnts, const vector<int> R, const vector<int> A, const vector<int> B, const vector<int> C, const vector<int> D);


