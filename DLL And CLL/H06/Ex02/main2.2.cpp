#include"Ex02.2.h"
int main()
{
	Node *head = NULL;
	createNode(head, 12);
	createNode(head, 84);
	createNode(head, 38);
	createNode(head, 12);
	createNode(head, 38);
	cout << "List before deleting: ";
	display(head);
	cout << endl;
	cout << "List after deleteing: ";
	removeDuplicate(head);
	display(head);
	cout << endl;
	deleteAll(head);
	system("pause");
	return 0;
}