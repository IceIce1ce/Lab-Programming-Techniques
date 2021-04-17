#include"Ex01.3.h"
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	long sum = caculateXn(n);
	cout << "x(n) = " << sum << endl;
	system("pause");
	return 0;
}