#include"Ex08.h"
int main()
{
	int x = 2;
	Node *p = NULL;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	removeAllX(&p, x);
	write(p, "E:/output.txt");
	deleteAll(p);
	system("pause");
	return 0;
}