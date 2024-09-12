#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int sz, int k)
{
	for(int i = 0; i<sz; i++)
	{
		if(arr[i] == k) return i;
	}
	return -1;
}

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n; i++) cin>>arr[i];
	int target = 20;
	cout<<linearSearch(arr, n, target)<<endl;
}