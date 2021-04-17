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
bool read(LinkedList &lst, const char *path);
bool write(LinkedList &lst, const char *path);
void insertAtEnd(LinkedList &lst, int x);
void insertXafterY(LinkedList &lst, int x, int y);
Node* createNode(int x);
void deleteAll(LinkedList &lst);