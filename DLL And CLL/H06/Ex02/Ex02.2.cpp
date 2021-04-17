#include"Ex02.2.h"
void remove(Node *&head, Node *cur)
{
	if (head == NULL || cur == NULL) return;
	if (head == cur)
	{
		head = cur->next;
	}
	if (cur->next != NULL)
	{
		cur->next->prev = cur->prev;
	}
	if (cur->prev != NULL)
	{
		cur->prev->next = cur->next;
	}
	delete(cur);
}
void removeDuplicate(Node *&head)
{
	Node *p, *q;
	if (head == NULL || head->next == NULL) return;
	for (p = head; p != NULL; p = p->next)
	{
		q = p->next;
		while (q != NULL)
		{
			if (p->data == q->data)
			{
				Node *temp = q->next;
				remove(head, q);
				q = temp;
			}
			else q = q->next;
		}
	}
}
void createNode(Node *&head, int x)
{
	Node *new_node = new Node;
	new_node->data = x;
	new_node->prev = NULL;
	new_node->next = head;
	if (head != NULL)
		head->prev = new_node;
	head = new_node;
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