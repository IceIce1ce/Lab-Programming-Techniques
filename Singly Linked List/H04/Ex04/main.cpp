#include"Ex04.h"
int main()
{
	Node *p;
	int x, y;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	cout << "Enter x to insert: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	insertBefore(p, x, y);
	write(p, "E:/output.txt");
	deleteAll(p);
	return 0;
}