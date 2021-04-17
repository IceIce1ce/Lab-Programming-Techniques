#include"Ex03.h"
int compare(point p1, point p2)
{
	int val1 = p1.y - p1.x;
	int val2 = p2.y - p2.x;
	if (val1 > val2)
		return -1;
	else if (val1 == val2)
		return 0;
	else
		return 1;
}