// UDEMY PARANTHESIS MATCHING.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string.h>
struct node
{
	char data;
	struct node* next;
}*top = NULL;
void push(int x)
{
	struct node* t;
	t = new struct node;
	t->data = x;
	if (top == NULL)
	{
		t->next = NULL;
		top = t;
	}
	else
	{
		t->next = top;
		top = t;
	}
	if (t == NULL)
	{
		cout << "stack overflow" << endl;
	}
}
void pop()
{
	if (top == NULL)
	{
		cout << "empty list" << endl;
	}
	else if (top != NULL)
	{
		struct node* p = top;
		top = top->next;
		delete p;
	}
}
void peek(int pos)
{
	struct node* p = top;
	{
		if (top == NULL)
		{
			cout << "empty" << endl;
		}
		else
		{
			for (int i = 1; i < pos; i++)
			{
				p = p->next;
			}
			cout << endl << p->data << endl;
		}
	}
}
void stacktop()
{
	if (top == NULL)
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "the top is" << top->data << endl;
	}
}
void stack_empty()
{
	if (top == NULL)
	{
		cout << "empty(matched)" << endl;
	}
	else
	{
		cout << "not empty(not matched)" << endl;
	}
}
void is_full()
{
	struct node* t = new struct node;
	if (t != NULL)
	{
		cout << "not full" << endl;
	}
	else
	{
		cout << "full" << endl;
	}
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

	char x[] = "{[{(a+b)}+d]}";
	int l = strlen(x);
	for (int i = 0; i < l; i++)
	{
		if (x[i] == '(' || x[i]=='{' || x[i]=='[')
		{
			push(x[i]);
		}
		else if (x[i] == ')' || x[i] == '}' || x[i] == ']')
		{
			if( top != NULL)
			{
				pop();
			}
			else
			{
				push(11);
				break;
			}
		}
		
	}
	display(top);
	stack_empty();
	

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
