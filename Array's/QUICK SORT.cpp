// QUICK SORT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partition(int A[], int l, int h)
{
	int pivot = A[l];
	int i = l, j = h;

	do
	{
		do { i++; } while (A[i] <= pivot);
		do { j--; } while (A[j] > pivot);

		if (i < j)swap(&A[i], &A[j]);
	} while (i < j);

	swap(&A[l], &A[j]);
	return j;
}
void QuickSort(int A[], int l, int h)
{
	int j;

	if (l < h)
	{
		j = partition(A, l, h);
		QuickSort(A, l, j);
		QuickSort(A, j + 1, h);
	}
}
#include<iostream>
using namespace std;
int main()
{
	int A[] = { 11,13,7,12,16,9,24,5,10,122323 }, n = 10, i;
	QuickSort(A, 0,n-1);
	for (i = 0; i < 10; i++)
	{
		cout << A[i] << endl;
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
