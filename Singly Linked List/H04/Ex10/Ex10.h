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
void write(Node *p, const char *path);
Node* createNode(int x);
void Reverse(Node *Head, Node* &head);
void reverse(Node *&head);
void deleteAll(Node *p);