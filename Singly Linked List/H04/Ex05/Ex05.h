#include<iostream>
#include<fstream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
struct LinkedList
{
	Node *head;
	Node *tail;
};
void createList(LinkedList &lst);
bool read(Node *&p, const char *path);
bool write(Node *p, const char *path);
Node* createNode(int x);
Node *removeBeginning(Node *p); 
void deleteAll(Node *p);