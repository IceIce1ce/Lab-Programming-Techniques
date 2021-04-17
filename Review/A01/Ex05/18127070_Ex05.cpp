#include"Ex05.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	date element[3];
	for (int i = 0; i < 3; i++)
	{
		file >> element[i].day;
		file >> element[i].month;
		file >> element[i].year;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << element[i].day << " " << element[i].month << " " << element[i].year;
	}
	file.close();
	ofstream file1("E:/output.txt");
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (element[i].year > element[j].year)
			{
				date temp = element[i];
				element[i] = element[j];
				element[j] = temp;
			}
			else if (element[i].year == element[j].year && element[i].month > element[j].month)
			{
				date temp = element[i];
				element[i] = element[j];
				element[j] = temp;
			}
			else if (element[i].year == element[j].year && element[i].month == element[j].month && element[i].day > element[j].day)
			{
				date temp = element[i];
				element[i] = element[j];
				element[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		file1 << element[i].day << endl;
		file1 << element[i].month << endl;
		file1 << element[i].year << endl;
	}
	file1.close();
	return 0;
}