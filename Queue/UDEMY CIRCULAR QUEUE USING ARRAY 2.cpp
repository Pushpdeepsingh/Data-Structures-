// UDEMY CIRCULAR QUEUE USING ARRAY 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct queue
{
	int rear;
	int front;
	int* q;
	int size;
};
void enqueue(struct queue* p, int x)
{
	if ((p->rear+1)%p->size == p->front)
	{
		cout << "the queue is full" << endl;
	}
	else
	{
		p->rear=(p->rear+1)%p->size;
		p->q[p->rear] = x;
	}
}
void dequeue(struct queue* p)
{
	if (p->rear == p->front)
	{
		cout << "the queue is empty" << endl;
	}
	else
	{
		int x;
		p->front= (p->front + 1) % p->size;
		x = p->q[p->front];
		cout << x << "is deleted" << endl;

	}
}
void display(struct queue* p)
{
	cout << "diplayed queue" << endl;
	int i = p->front+1;
	do
	{
		cout << p->q[i];
		cout << endl;
		i = (i + 1) % p->size;
	} while ((p->rear + 1) % p->size !=i);
}
int main()
{
	struct queue x;
	x.rear = x.front = 0;
	cout << "enter the size of the queue" << endl;
	cin >> x.size;
	x.q = new int[x.size];

	enqueue(&x, 10);
	enqueue(&x, 20);
	enqueue(&x, 30);
	enqueue(&x, 40);
	enqueue(&x, 50);
	enqueue(&x, 60);
	enqueue(&x, 70);
	dequeue(&x);
	display(&x);
	return 0;

}// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
