#include "Ex01.h"
bool loadArray(const char *path, Fraction a[], int &n) 
{
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return false;
	fin >> n;
	for (int i = 0; i < n; i++) 
	{
		fin >> a[i].nu;
		fin >> a[i].de;
	}
	fin.close();
	return true;
}
int compare(Fraction p1, Fraction p2) 
{
	double val1 = 1.0 * p1.nu / p1.de;
	double val2 = 1.0 * p2.nu / p2.de;
	if (val1 < val2)
		return -1;
	else if (val1 == val2)
		return 0;
	else
		return 1;
}
Fraction max(Fraction a[], int n) 
{
	Fraction ans = a[0];
	for (int i = 0; i < n; i++) 
	{
		if (compare(a[i], ans) == 1) 
		{ 
			ans = a[i];
		}
	}
	return ans;
}
bool saveAFraction(const char *path, Fraction p) {
	ofstream fout;
	fout.open(path);
	if (!fout.is_open())
		return false;
	fout << p.nu << " " << p.de << endl;
	fout.close();
	return true;
}
void sortAsc(Fraction a[], int n) 
{
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (compare(a[i], a[j]) == 1) 
			{
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}