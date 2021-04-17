#include"Ex01.h"
Node *createNode(int x)
{
	Node *head = new Node;
	{
		if (head != NULL)
		{
			head->data = x;
			head->next = NULL;
		}
		return head;
	}
}
void createList(LinkedList &lst) 
{
	lst.head = lst.tail = NULL;
}
bool load(const char *path, LinkedList &lst)
{
	int x;
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) return false;
	createList(lst);
	while (!fin.eof())
	{
		fin >> x;
		if (x == 0) break;
		else push(lst, x);
	}
	fin.close();
	return true;
}
bool save(const char *path, LinkedList p)
{
	ofstream fout;
	fout.open(path);
	if (!fout.is_open()) return false;
	if (p.head == NULL)
	{
		fout << 0;
	}
	else
	{
		for (Node *temp = p.head; temp != p.tail; temp = temp->next)
		{
			fout << temp->data << " ";
		}
		fout << p.tail->data << " ";
		fout << 0;
	}
	fout.close();
	return true;
}
void push(LinkedList &lst, int x) 
{
	Node *temp = createNode(x);
	if (temp == NULL) return;
	if (lst.head == NULL && lst.tail == NULL) 
	{
		lst.head = lst.tail = temp;
	}
	else 
	{
		lst.tail->next = temp;
		lst.tail = temp;
		lst.tail->next = lst.head;
	}
}
int searchNodeSmallest(LinkedList lst)
{
	int min = lst.head->data;
	if (lst.head == NULL || lst.head->next == NULL) return 0;
	for (Node *temp = lst.head->next; temp != lst.head; temp = temp->next)
	{
		if (temp->data < min)
		{
			min = temp->data;
		}
	}
	return min;
}
void deleteNodeSmallest(LinkedList &lst, int min)
{
	Node *p = lst.head;
	if (lst.head == NULL || lst.head->next == NULL) return;
	for (Node *cur = lst.head->next; cur != lst.head; cur = cur->next)
	{
		if (cur->data == min)
		{
			p->next = cur->next;
			delete(cur);
			cur = p;
		}
		else
		{
			p = cur;
		}
	}
	if (lst.head->data == min)
	{
		Node *p = lst.head;
		lst.head = lst.head->next;
		delete(p);
	}
}
void deleteAll(LinkedList &lst)
{
	Node *temp = NULL;
	for (Node *p = lst.head; p != lst.tail;)
	{
		temp = p;
		p = p->next;
	}
	temp = lst.tail;
	delete(temp);
}