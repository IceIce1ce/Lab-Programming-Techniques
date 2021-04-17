#include"Ex06.h"
bool isPalindrome(char* cstr)
{
	char* front = cstr;
	char* back = cstr + strlen(cstr) - 1;
	while (front < back)
	{
		if ((*front) == (*back))
		{
			front++;
			back--;
		}
		else
		{
			return false;
		}
	}
	return true;
}