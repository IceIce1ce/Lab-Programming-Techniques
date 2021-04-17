#include"Ex03.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	point element[3];
	for (int i = 0; i < 3; i++)
	{
		file >> element[i].x;
		file >> element[i].y;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << element[i].x << " " << element[i].y;
	}
	file.close();
	ofstream file1("E:/output.txt");
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (compare(element[i], element[j]) == 1)
			{
				point temp = element[i];
				element[i] = element[j];
				element[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		file1 << element[i].x << endl;
		file1 << element[i].y << endl;
	}
	file1.close();
	return 0;
}