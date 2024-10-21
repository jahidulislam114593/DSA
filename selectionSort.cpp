#include<bits/stdc++.h>
using namespace std;

void SellectionSort(int arr[], int n)
{
	//O(n^2)
	for(int i = 0; i<n-1; i++)
	{
		int smallestIdx = i;
		for(int j = i+1; j<n; j++)
		{
			if(arr[j] < arr[smallestIdx])
				smallestIdx = j;
		}
		swap(arr[i], arr[smallestIdx]);
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
	SellectionSort(arr, n);
	printArrary(arr, n);

	return 0;
}