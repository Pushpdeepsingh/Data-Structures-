// udemy infix to postfix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;
struct node
{
	char data;
	struct node* next;
}*top=NULL;
struct node* last;
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
}
char pop()
{
	if (top == NULL)
	{
		cout << "the stack is empty" << endl;
		return 'l';
	}
	else
	{
		struct node* p = top;
		top = p->next;
	
		return p->data;
	}
}
void display(struct node* p)
{
	while (p !=NULL)
	{
		cout << endl << p->data << endl;
		p = p ->next; 
	}
}
int isoperand(char x)
{
	if (x == '-' || x == '+' || x == '/' || x == '*')
		return 0;
	else
		return 1;

}
char stacktop(struct node *p)
{
	return p->data;
}
int pre(char x)
{
	if (x == '-' || x == '+')
		return 1;
	else if (x == '/' || x == '*')
		return 2;
	else
		return 0;
}
char* convert(char* infix)
{
	int i=0 , j = 0;
	char* postfix = new char[strlen(infix) + 1];
	while (infix[i] != '\0')
	{
		if (isoperand(infix[i]))
		{
			postfix[j++] = infix[i++];
		}
		else
		{
			if (pre(infix[i] > pre(stacktop(top))))
				push( infix[i++]);
			else
				postfix[j++] = pop();
		}
	}
	while (top != NULL)
		postfix[j++] = pop();
	postfix[j] = '\0';
	return postfix;

}
int main()
{
	char infix[] = "a+b*c-d/e";
	push('#');
	char* postfix = convert(infix);
	cout << postfix;

	

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
