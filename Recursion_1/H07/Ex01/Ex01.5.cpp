#include"Ex01.5.h"
int toBinary(int x)
{
	if (x == 0) return 0;
	else return (x % 2) + 10 * toBinary(x / 2);
}