#include"Ex03.h"
Node* createNode(int x)
{
	Node *p = new Node;
	if (p != NULL)
	{
		p->data = x;
		p->next = NULL;
	}
	return p;
}
void createList(LinkedList &lst)
{
	lst.head = lst.tail = NULL;
}
bool read(LinkedList &lst, const char *path)
{
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) return false;
	int x; 
	createList(lst);
	while (1)
	{
		fin >> x;
		if (x == 0) break;
		else insertAtEnd(lst, x);
	}
	fin.close();
	return true;
}
bool write(LinkedList &lst, const char *path)
{
	ofstream fout;
	fout.open(path);
	if (!fout.is_open()) return false;
	for (Node* tmp = lst.head; tmp != NULL; tmp = tmp->next)
	{
		fout << tmp->data << " ";
	}
	fout << 0;
	fout.close();
	return true;
}
void insertAtEnd(LinkedList &lst, int x)
{
	Node *p = createNode(x);
	if (p == NULL) return;
	if (lst.head == NULL && lst.tail == NULL)
	{
		lst.head = lst.tail = p;
	}
	else
	{
		lst.tail->next = p;
		lst.tail = p;
	}
}
void insertXafterY(LinkedList &lst, int x, int y) 
{
	Node *p = createNode(x);
	int k = 0;
	if (p == NULL) return;
	if (lst.head == NULL && lst.tail == NULL) 
	{
		lst.head = lst.tail = p;
	}
	else 
	{
		for (Node *tmp = lst.head; tmp != NULL; tmp = tmp->next)
		{
			if (tmp->data == y)
			{
				p->next = tmp->next;
				tmp->next = p;
				k++;
				break;
			}
		}
		if (k == 0)
		{
			lst.tail->next = p;
			lst.tail = p;
		}
	}
}
void deleteAll(LinkedList &lst)
{
	Node *tmp = lst.head;
	while (tmp != nullptr)
	{
		lst.head = lst.head->next;
		delete tmp;
		tmp = lst.head;
	}
}