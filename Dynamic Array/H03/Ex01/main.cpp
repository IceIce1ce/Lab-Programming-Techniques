#include"Ex01.h"
int main()
{
	int num = 1;
	cout << "value of variable before completing the function: " << num << "\n";
	addOne(&num);
	cout << "value of variable after completing the function: " << num << "\n";
	system("pause");
	return 0;
}