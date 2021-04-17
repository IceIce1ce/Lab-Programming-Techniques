#include"Ex04.h"
int main()
{
	Fraction* a;
	int n;
	ifstream fin("input.bin", ifstream::binary);
	if (!fin.is_open())
	{
		cout << "Can not open file" << endl;
		return 1;
	}
	fin.read((char*)& n, sizeof(int));
	a = new Fraction[n];
	for (int i = 0; i < n; i++)
	{
		fin.read((char*)& a[i], sizeof(Fraction));
	}
	fin.close();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (compare(a[i], a[j]) == 1)
			{
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i].nu << "/" << a[i].de << " ";
	}
	cout << endl;
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
	cout << "Save sucessfully";
	return 0;
}