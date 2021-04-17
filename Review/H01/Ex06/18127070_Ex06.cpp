#include"Ex06.h"
int main()
{
	ifstream file;
	file.open("E:/input.txt");
	product element[2];
	for (int i = 0; i < 2; i++)
	{
		file >> element[i].id;
		file >> element[i].name;
		file >> element[i].stock;
		file >> element[i].price;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << element[i].id << " " << element[i].name << " " << element[i].stock << " " << element[i].price;
	}
	file.close();
	ofstream file1("E:/output.txt");
	int sum = 0, total = 0;
	for (int i = 0; i < 2; i++)
	{
		sum = element[i].stock * element[i].price;
		total += sum;
	} 
	for (int i = 0; i < 1; i++)
	{
		file1 << "money you have to pay is: " << total << endl;
	}
	file1.close();
	return 0;
}