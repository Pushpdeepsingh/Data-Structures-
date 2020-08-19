// udemy queue using linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node
{
	int data;
    node* next;
}*first=NULL;
struct  node* last;
void enqueue(int x)
{
	struct node* t;
	t = new struct node;
	t->data = x;
	t->next = NULL;
	if (first == NULL)
	{
		last = first = t;
	}
	else
	{
		last->next = t;
		last = t;
	}
}
void dequeue()
{
	if (first == last == NULL)
	{
		cout << "empty queue" << endl;
	}
	struct node* p = first;
	first = first->next;
	delete p;
}
void display(struct node* p)
{
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(140);
	enqueue(104);
	enqueue(1023);
	display(first);
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
