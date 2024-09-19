#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, vector<int> &arr, int n)
{
	if(i >= n/2) return;
	swap(arr[i], arr[n-i-1]);
	reverseArray(i+1, arr, n);
}

int main()
{
	int n; cin>>n;
	vector<int> arr(n);
	for(int &val: arr) cin>>val;
	reverseArray(0, arr, n);

	for(int val: arr) cout<<val<<" ";
	
}