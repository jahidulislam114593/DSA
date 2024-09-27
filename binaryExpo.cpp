#include<bits/stdc++.h>
using namespace std;

int main()
{
	//BruteForce
	// int x; cin>>x;
	// int n; cin>>n;

	// int ans = 1;
	// for(int i = 0; i<n; i++)
	// {
	// 	ans *= x;
	// }
	// cout<<ans<<endl;


    // Binary Exponentiation
	int x, n; cin>>x>>n;
	int b = n, ans = 1; 

	while(b > 0)
	{
		if(b & 1)
		{
			ans *= x;
		}
		x *= x;
		b /= 2;
	}
	cout<<ans<<endl;
}