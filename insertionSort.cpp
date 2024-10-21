#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	//O(n^2)
	for(int i = 1; i<n; i++)
	{
		int currentEle = arr[i]; // unsorted part er 1st ele 
		int prev = i - 1;
		while(prev >= 0 && arr[prev] > currentEle)
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = currentEle; // placing the currentEle in its correct position
	}
}


void printArrary(int arr[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main()
{
	int n = 5;
	int arr[] = {4, 1, 5, 2, 3};
	insertionSort(arr, n);
	printArrary(arr, n);

	return 0;
}