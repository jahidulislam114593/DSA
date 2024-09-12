#include<bits/stdc++.h>
using namespace std;

void reverseArrary(int arr[], int sz)
{
	// printing reverse only 
	// for(int i = sz - 1; i >= 0 ; i--)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl; 

	int start = 0, end = sz - 1;
	while(start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];

	reverseArrary(arr, n);
	
	for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
	cout<<endl;
}