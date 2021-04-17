#include"Ex01.2.h"
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	long ans1 = caculateXn(n);
	long ans2 = caculateYn(n);
	cout << "x(n) = " << ans1 << endl;
	cout << "y(n) = " << ans2 << endl;
	system("pause");
	return 0;
}