#include"Ex01.h"
int main() 
{
	int a[] = { 1, 2, 3, 4 };
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
		fout.write((char*)& a[i], sizeof(int));
	}
	fout.close();
	cout << "Saved successfully";
	return 0;
}