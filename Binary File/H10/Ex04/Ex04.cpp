#include"Ex04.h"
int compare(Fraction p1, Fraction p2) 
{
	double val1 = 1.0 * p1.nu / p1.de;
	double val2 = 1.0 * p2.nu / p2.de;
	if (val1 < val2) return -1;
	else if (val1 == val2) return 0;
	else return 1;
}