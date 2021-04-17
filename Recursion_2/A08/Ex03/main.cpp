#include"Ex03.h"
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int *num;
	num = new int[n];
	bool *permute;
	permute = new bool[n];
	for (int i = 0; i < n; ++i)
		permute[i] = true;
	permutation(0, num, n, permute);
	delete[] permute;
	delete[] num;
	system("pause");
	return 0;
}