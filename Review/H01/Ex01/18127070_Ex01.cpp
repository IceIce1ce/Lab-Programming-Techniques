#include"Ex01.h"
int main() 
{
	Fraction a[100];
	int n;
	bool ans = loadArray("E:/input.txt", a, n);
	if (ans) 
	{
		Fraction p = max(a, n);
		ans = saveAFraction("E:/max.txt", p);
		if (ans) 
		{
			cout << "Find max and save successully" << endl;
		}
	}
	else 
	{
		cout << "Can not load data" << endl;
	}
	return 0;
}