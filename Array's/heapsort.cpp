// heapsort1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include<iostream>
using namespace std;
void Insert(int A[], int n)
{
	int i = n, temp;
	temp = A[i];
	while (i > 1 && temp > A[i / 2])
	{
		A[i] = A[i / 2];
		i = i / 2;
	}
	A[i] = temp;
}
int Delete(int A[], int n)
{
	int i, j, x, temp, val;
	val = A[1];
	x = A[n];
	A[1] = A[n];
	A[n] = val;
	i = 1; j = i * 2;
	while (j <= n - 1)
	{
		if (j<n - 1 && A[j + 1]>A[j])
			j = j + 1;
		if (A[i] < A[j])
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i = j;
			j = 2 * j;
		}
		else
			break;
	}
	return val;
}
int main() {
	int H[] = { 0,14,15,5,20,30,8,40 };
	int i;
	for (i = 2; i <= 7; i++)
		Insert(H, i);

	for (i = 7; i > 1; i--)
	{
		Delete(H, i);
	}
	for (i = 1; i <= 7; i++)
	{
		cout << H[i];
		cout << endl;;
	}
	return 0;
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
