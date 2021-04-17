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
Node *createNode(int x);
void createList(LinkedList &lst);
bool load(const char *path, LinkedList &lst);
bool save(const char *path, LinkedList p);
void push(LinkedList &lst, int x);
int searchNodeSmallest(LinkedList lst);
void deleteNodeSmallest(LinkedList &lst, int min);
void deleteAll(LinkedList &lst);