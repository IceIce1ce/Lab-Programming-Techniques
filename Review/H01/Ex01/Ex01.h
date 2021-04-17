#include <iostream>
#include <fstream>
using namespace std;
struct Fraction
{
	int nu, de;
};
bool loadArray(const char *path, Fraction a[], int &n);
int compare(Fraction p1, Fraction p2);
Fraction max(Fraction a[], int n);
bool saveAFraction(const char *path, Fraction p);