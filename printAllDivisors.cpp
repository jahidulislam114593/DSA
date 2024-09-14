#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Given an integer ‘N’, your task is to write a program 
	// that returns all the divisors of ‘N’ in ascending order.
	
	int n; cin>>n;

	for(int i = 1; i<=n; i++)
	{
		if(n% i == 0) cout<<i<<" ";
	}

	return 0;
}