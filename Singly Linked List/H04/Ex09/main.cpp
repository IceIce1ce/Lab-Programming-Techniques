#include"Ex09.h"
int main()
{
	Node *p;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	removeDuplicates(p);
	write(p, "E:/output.txt");
	deleteAll(p);
	system("pause");
	return 0;
}