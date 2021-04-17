#include"Ex07.h"
int main()
{
	Node *head; 
	Node *p;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	removeX(p, 3);
	write(p, "E:/output.txt");
	deleteAll(p);
	system("pause");
	return 0;
}