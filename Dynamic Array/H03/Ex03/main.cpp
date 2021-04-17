#include "Ex05.h"
int main()
{
	const int size = 10;
	int array[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *num = array;
	for (int i = 0; i < size; i++)
		cout << num[i] <<  endl ;
	num = Size(array, size);
	for (int i = 0; i < size * 2; i++)
		cout << num[i] << endl;
	delete[] num;
	num = 0;
	system("pause");
	return 0;
}