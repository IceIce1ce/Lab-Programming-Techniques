#include"Ex05.h"
int main()
{
	Node *p;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	p = removeBeginning(p);
	cout << p;
	write(p, "E:/output.txt");
	deleteAll(p);
	return 0;
}