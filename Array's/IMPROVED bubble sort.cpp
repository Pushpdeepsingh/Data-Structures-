// IMPROVED bubble sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void bubble_sort(int x[], int m);
int main()
{
	cout << "enter the lenght of the array" << endl;
	int n;
	cin >> n;
	int a[25];
	cout << "enter the elements of your choice" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bubble_sort(a, n);
}
void bubble_sort(int x[], int m)
{
	int temp;
	int flag;
	
		for (int i = 0; i < m - 1; i++)
		{
			flag = 0;
			for (int j = 0; j < m-1-i; j++)
			{
				if (x[j] < x[j+1])
				{
					temp = x[j+1];
					x[j+1] = x[j];
					x[j] = temp;
					flag++;
				}
			}
			if (flag == 0)
			{
				break;
			}
			
		}
	
	cout << "the sorted list is as follows" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << x[i] << endl;
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
