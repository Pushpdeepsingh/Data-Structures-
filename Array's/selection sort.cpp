// selection sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void selection(int a[], int n);
int main()
{
	int n; int a[10];
	cout << "enter the number of the elements" << endl;
	cin >> n;
	cout << "enter your numbers" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	selection( a,  n);
}
void selection(int a[], int n)
{
	int k; int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j=k=i; j < n; j++)
		{
			if (a[j] > a[k])
			{
				k = j;
			}
		}
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;
	}
	cout << "the sorted list is as follows" << endl;
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
