#include"Ex02.1.h"
Node *createNode(int x)
{
	Node *new_node = new Node;
	new_node->data = x;
	new_node->next = NULL;
	return new_node;
}
void insertMiddle(Node *prev_node, int x, int pos)
{ 
	int i = 1;
	while (i < pos - 1 && prev_node != NULL)
	{
		prev_node = prev_node->next;
		i++;
	}
	if (prev_node == NULL) 
	{
		cout << "The previous node cannot be NULL";
		return;
	}
	Node *new_node = new Node;
	new_node->data = x;
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	if (prev_node->next != NULL)
	{
		prev_node->next->prev = new_node;
	}
	prev_node->next = new_node;
}
void display(Node *head)
{
	if (head == NULL) cout << "List is empty";
	while (head != NULL) 
	{
		cout << head->data << " ";
		head = head->next;
	}
}
void deleteAll(Node *&p)
{
	Node* temp = p;
	while (p != nullptr)
	{
		p = p->next;
		delete temp;
		temp = p;
	}
}