#include"Ex02.h"
int main()
{
	int y, z;
	cout << "Enter a number: " << endl;
	cin >> y;
	cout << "Enter another number: " << endl;
	cin >> z;
	doSomething(&y, &z);
	cout << (y + z) << " = " << y << " + " << z << " " << endl;
	system("pause");
	return 0;
}