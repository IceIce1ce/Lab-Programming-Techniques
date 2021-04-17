#include"Ex10.h"
int main()
{
	Node *p;
	Node *head = nullptr;
	if (!read(p, "E:/input.txt"))
	cout << "unable to load data from file" << endl;
	reverse(head);
	write(p, "E:/output.txt");
	deleteAll(p);
	system("pause");
	return 0;
}