#include"Ex08.h"
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
void write(Node *p, const char *path)
{
	ofstream fout;
	fout.open(path);
	if (!fout.is_open())
		cout << "unable to load data";
	else
	{
		while (p != nullptr)
		{
			fout << p->data << " ";
			p = p->next;
		}
	}
	fout << 0;
}
void removeAllX(struct Node **head, int x)
{
	Node* temp = *head;
	Node *pre = NULL;
	while (temp != NULL && temp->data == x)
	{
		*head = temp->next;    
		free(temp);              
		temp = *head;        
	}
	while (temp != NULL)
	{
		while (temp != NULL && temp->data != x)
		{
			pre = temp;
			temp = temp->next;
		}
		if (temp == NULL) return;
		pre->next = temp->next;
		free(temp);  
		temp = pre->next;
	}
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