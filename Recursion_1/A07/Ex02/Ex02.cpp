#include"Ex02.h"
bool checkPanlindrome(char *str, int l, int r)
{
	if (l == r) return true;
	if (str[l] != str[r]) return false;
	if (l < r + 1) return checkPanlindrome(str, l + 1, r - 1);
	return true;
}
bool isPalindrome(char *str)
{
	int n = strlen(str);
	if (n == 0) return true;
	return checkPanlindrome(str, 0, n - 1);
}