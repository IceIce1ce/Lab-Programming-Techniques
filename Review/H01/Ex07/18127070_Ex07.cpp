#include"Ex07.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	student element[3];
	for (int i = 0; i < 3; i++)
	{
		file >> element[i].id;
		file >> element[i].name;
		file >> element[i].gpa;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << element[i].id << " " << element[i].name << " " << element[i].gpa;
	}
	file.close();
	ofstream file1("E:/output.txt");
	float max;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (element[i].gpa > element[j].gpa)
			{
				max = element[i].gpa;
			}
		}
	}
	for (int i = 0; i < 1; i++)
	    {
			file1 << "student with max gpa is: " << max << endl;
		}
	file1.close();
	return 0;
}