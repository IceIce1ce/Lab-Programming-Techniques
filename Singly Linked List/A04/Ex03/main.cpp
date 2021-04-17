#include"Ex03.h"
int main()
{
	int x, y;
	LinkedList lst;
	if (!read(lst, "E:/input.txt")) 
	cout << "unable to load data from file" << endl;
	cout << "Enter x to insert: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	insertXafterY(lst, x, y);
	write(lst, "E:/output.txt");
	deleteAll(lst);
}