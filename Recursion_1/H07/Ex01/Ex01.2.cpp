#include"Ex01.2.h"
long caculateXn(int n)
{
	if (n == 0) return 1;
	return caculateXn(n - 1) + caculateYn(n - 1);
}
long caculateYn(int n)
{
	if (n == 0) return 0;
	return 3 * caculateXn(n - 1) + 2 * caculateYn(n - 1);
}