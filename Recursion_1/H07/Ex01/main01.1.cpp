#include"Ex01.1.h"
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	long ans = Fibonacci(n);
	cout << ans;
	cout << endl;
	system("pause");
	return 0;
}