#include"Ex02.h"
int main()
{
	int* a;
	int n;
	ifstream fin("input.bin", ifstream::binary);
	if (!fin.is_open())
	{
		cout << "Can not open file" << endl;
		return 1;
	}
	fin.read((char*)& n, sizeof(int));
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		fin.read((char*)& a[i], sizeof(int));
	}
	fin.close();
	cout << "Max value in array is: " << findMax(a, n);
	return 0;
}