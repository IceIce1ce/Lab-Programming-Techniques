#include"Ex02.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	Fraction element[3];
	for (int i = 0; i < 3; i++)
	{
		file >> element[i].nu;
		file >> element[i].de;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << element[i].nu << " " << element[i].de;
	}
	file.close();
	ofstream file1("E:/output.txt");
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (compare(element[i], element[j]) == 1)
			{
				Fraction temp = element[i];
				element[i] = element[j];
				element[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		file1 << element[i].nu << endl;
		file1 << element[i].de << endl;
	}
	file1.close();
	return 0;
}