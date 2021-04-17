#include"Ex02.h"
int findMax(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	if (a[i] > max) max = a[i];
	return max;
}