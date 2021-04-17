#include<iostream>
using namespace std;
int row[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int col[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int n, k, res, a[100][100];
void backTracking(int i, int j);