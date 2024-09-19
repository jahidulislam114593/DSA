#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if(n <= 1) return n;
	return fibo(n-1) + fibo(n-2);
}


int main()
{
	//brute force approch
	// int n; cin>>n;
	// int nth; cin>>nth;
	// vector<int> arr(n);
	// arr[0] = 0;
	// arr[1] = 1;
	// for(int i = 2; i<n; i++)
	// {
	// 	arr[i] = arr[i-1] + arr[i-2];
	// }

	// for(int val: arr) cout<<val<<" ";
	// cout<<endl;
	// cout<<arr[nth]<<endl;


	// Recursion Approch
	int n; cin>>n;
	cout<<fibo(n)<<endl;
}
