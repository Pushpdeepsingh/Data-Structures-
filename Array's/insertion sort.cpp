// insertion sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void insertion_sort(int a[], int n);
int main()
{
	int M; int B[10];
	cout << "enter the lenght of the array" << endl;
	cin >> M;
	cout << "enter the elements" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}
	insertion_sort(B, M);
}
void insertion_sort(int a[], int n)
{
	int temp;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "sorted array is as follows" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
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
