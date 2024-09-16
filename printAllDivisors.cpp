#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Given an integer ‘N’, your task is to write a program 
	// that returns all the divisors of ‘N’ in ascending order.
	
	int n; cin>>n;
	vector<int> v;
	for(int i = 1; i*i<=n; i++)
	{
		if(n % i == 0) v.push_back(i);
		if((n/i) != i) v.push_back(n/i);
	}
	sort(v.begin(), v.end());
	for(auto i : v) cout<<i<<" ";

	return 0;
}