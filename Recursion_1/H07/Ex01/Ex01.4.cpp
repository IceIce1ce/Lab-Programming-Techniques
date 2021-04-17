#include"Ex01.4.h"
int C(int k, int n)
{
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return C(k - 1, n - 1) + C(k, n - 1);
}