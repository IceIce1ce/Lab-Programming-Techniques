#include"Ex02.1.h"
int main()
{
	Node *head = NULL;
	head = createNode(38);
	head->next = createNode(12);
	head->next->next = createNode(38);
	head->next->next->next = createNode(84);
	head->next->next->next->next = createNode(12);
	cout << "List before inserting: ";
	display(head);
	cout << endl;
	int x;
	cout << "Enter x to insert: ";
	cin >> x;
	insertMiddle(head, x, 3);
	cout << "List after inserting: ";
	display(head);
	cout << endl;
	deleteAll(head);
	system("pause");
	return 0;
}