// UDEMY create tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
struct qnode
{
	struct node* data;
	struct qnode* next;
}*first = NULL;
struct qnode* last;
void enqueue(struct node* x)
{
	struct qnode* t;
	t = new struct qnode;
	t->next = NULL;
	t->data = x;
	if (first == NULL)
	{
		first = last = t;
	}
	else
	{
		last->next = t;
		last = t;
	}
}
void dequeue(struct qnode* p)
{
	if (first == NULL)
	{
		cout << "queue is empty " << endl;
	}
	else
	{
		first = first->next;
		cout << p->data << "is being deleted" << endl;
		delete p;
	}
}
int isempty()
{
	if (first == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display(struct qnode* p)
{
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}
struct node
{
	int data;
	struct node* lc;
	struct node* rc;
}*root = NULL;


void create(struct node* q)
{

	int o;

	cout << "does this node has the right child" << endl;
	cout << "enter the -1 if no right child is there:";
	cout << "enter the data of the right child " << endl;
	cin >> o;


	if (o > -1)
	{
		struct node* t;
		t = new struct node;
		t->lc = t->rc = 0;
		q->rc = t;
		enqueue(t);
	}
	else
	{
		dequeue(first);


	}



}
void create2(struct node* q)
{

	int o;

	cout << "does this node has the left child" << endl;
	cout << "enter the -1 if no left child is there:";
	cout << "enter the data of the left child " << endl;
	cin >> o;


	if (o > -1)
	{
		struct node* t;
		t = new struct node;
		t->lc = t->rc = 0;
		q->lc = t;
		enqueue(t);
	}
	else
	{
		dequeue(first);
	}
}


int main()
{
	struct node* root;
	root = new struct node;
	root->lc = root->rc = NULL;

	cout << "enter the data of the root node" << endl;
	cin >> root->data;

	enqueue(root);
	while (!isempty())
	{
		create(first->data);
		create2(first->data);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
