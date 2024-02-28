#include "ATDvector.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <ctime>


void input_points_hand(points_set& a, int n1)
{
    int temp;
    a.n = n1;
    for (int i = 0; i < a.n; i++)
    {
        vector <int> coord;
        for (int j = 0; j < 2; j++)
        {
            cin >> temp;
            coord.push_back(temp);
        }
        a.points.push_back(coord);
    }
}

void input_points_rand(points_set& a, int n1)
{
    srand(time(0));
    a.n = n1;
    for (int i = 0; i < a.n; i++)
    {
        vector <int> coord;
        for (int j = 0; j < 2; j++)
        {
            coord.push_back(rand() % 10);
        }
        a.points.push_back(coord);
    }
}

void output_points(points_set a)
{
    for (int i = 0; i < a.n; i++)
    {
        cout << "(" << a.points[i][0] << "; " << a.points[i][1] << ")\n";
    }
}

double get_dist(const vector<int> A, const vector<int> B)
{
    return sqrt(pow(A[0] - B[0], 2) + pow(A[1] - B[1], 2));
}

double triangle_area(const vector<int> A, const vector<int> B, const vector<int> C)
{
    double a = get_dist(A, B);
    double b = get_dist(B, C);
    double c = get_dist(A, C);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool isSquare(const vector<int> A, const vector<int> B, const vector<int> C, const vector<int> D)
{
    bool result = true;
    double distances[6] = { get_dist(A, B), get_dist(A, C), get_dist(A, D), get_dist(B, C), get_dist(B, D), get_dist(C, D) };

    for (int i = 0; i < 5; i++) 
    {
        for (int j = i + 1; j < 6; j++) 
        {
            if (distances[i] > distances[j]) 
            {
                double temp = distances[i];
                distances[i] = distances[j];
                distances[j] = temp;
            }
        }
    }

    for (int i = 5; i >= 0; i--) 
    {
        distances[i] /= distances[0];
    }

    for (int i = 0; i < 4; i++) 
    {
        result *= (abs(distances[i] - 1.0) < 1e-10);
    }

    for (int i = 4; i < 6; i++) 
    {
        result *= (abs(distances[i] - sqrt(2)) < 1e-10);
    }

    return result;
}

double get_angle(const vector<int> A, const vector<int> B) 
{
    return atan2(B[1] - A[1], B[0] - A[0]) + M_PI;
}

bool inSquare(points_set& pnts, const vector<int> R, const vector<int> A, const vector<int> B, const vector<int> C, const vector<int> D)
{
    pnts.points.push_back(A);
    pnts.points.push_back(B);
    pnts.points.push_back(C);
    pnts.points.push_back(D);
    pnts.n = 4;

    for (int i = 1; i < 3; i++) 
    {
        for (int j = i + 1; j < 4; j++) 
        {
            if (get_angle(pnts.points[0], pnts.points[i]) > get_angle(pnts.points[0], pnts.points[j])) 
            {
                vector<int> temp = pnts.points[i];
                pnts.points[i] = pnts.points[j];
                pnts.points[j] = temp;
            }
        }
    }

    double S1 = triangle_area(pnts.points[0], pnts.points[1], R);
    double S2 = triangle_area(pnts.points[1], pnts.points[2], R);
    double S3 = triangle_area(pnts.points[2], pnts.points[3], R);
    double S4 = triangle_area(pnts.points[0], pnts.points[3], R);

    double S = 2 * triangle_area(A, B, C);

    return abs(S - S1 - S2 - S3 - S4) < 1e-10;
}

