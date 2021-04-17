#include"Ex01.3.h"
long caculateXn(int n)
{
	if (n == 0) return 1;
	long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i * i * caculateXn(n - i);
	}
	return sum;
}