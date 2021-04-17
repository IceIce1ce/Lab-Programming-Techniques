#include"Ex01.6.h"
int sum_of_digit(int x)
{
	if (x == 0) return 0;
	else return x % 10 + sum_of_digit(x / 10);
}