#include"Ex04.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	circle element[3];
	for (int i = 0; i < 3; i++)
	{
		file >> element[i].x;
		file >> element[i].y;
		file >> element[i].R;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << element[i].x << " " << element[i].y << " " << element[i].R;
	}
	file.close();
	ofstream file1("E:/output.txt");
	float area = 0, sum = 0;
	for (int i = 0; i < 3; i++)
	{
		area = 3.14 * element[i].R * element[i].R;
		sum += area;
	}
	for (int i = 0; i < 1; i++)
	{
		file1 << "sum of their area is: " << sum << endl;
	}
	file1.close();
	return 0;
}