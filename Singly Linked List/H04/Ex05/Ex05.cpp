#include"Ex05.h"
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
bool read(Node *&p, const char *path)
{
	int x;
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) return false;
	p = nullptr;
	Node *temp = nullptr;
	fin >> x;
	if (x != 0)
	{
		temp = createNode(x);
		p = temp;
	}
	while (true)
	{
		fin >> x;
		if (x == 0) break;
		temp->next = createNode(x);
		temp = temp->next;
	}
	fin.close();
	return true;
}
bool write(Node *p, const char *path)
{
	ofstream fout;
	fout.open(path);
	if (!fout.is_open()) return false;
	for (Node* temp = p; temp != NULL; temp = temp->next)
	{
		fout << temp->data << " ";
	}
	fout << 0;
	fout.close();
	return true;
}
Node *removeBeginning(Node *p)
{
	if (p == NULL) return NULL;
	Node *temp = p;
	p = p->next;
	delete temp;
	return p;
}
void deleteAll(Node *p)
{
	Node *temp = p;
	while (p != nullptr)
	{
		p = p->next;
		delete temp;
		temp = p;
	}
}