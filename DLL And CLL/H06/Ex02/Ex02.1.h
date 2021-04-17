#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
};
Node *createNode(int x);
void insertMiddle(Node *prev_node, int x, int pos);
void display(Node *head);
void deleteAll(Node *&p);