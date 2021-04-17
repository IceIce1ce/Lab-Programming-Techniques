#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
};
void remove(Node *&head, Node *cur);
void removeDuplicate(Node *&head);
void createNode(Node *&head, int x);
void display(Node *head);
void deleteAll(Node *&p);