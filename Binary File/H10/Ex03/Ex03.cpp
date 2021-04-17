#include"Ex03.h"
int main() 
{
	Fraction a[] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };
	int n = 4;
	ofstream fout("output.bin", ofstream::binary);
	if (!fout.is_open()) 
	{
		cout << "Can not create file" << endl;
		return 1;
	}
	fout.write((char*)& n, sizeof(int));
	for (int i = 0; i < n; i++) 
	{
		fout.write((char*)& a[i], sizeof(Fraction));
	}
	fout.close();
	cout << "Saved sucessfully";
	return 0;
}