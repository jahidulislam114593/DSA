#include<bits/stdc++.h>
using namespace std;

int main()
{
	//n^x
	// int n; cin>>n;
	// int x; cin>>x;
	// int ans = 1;
	// for(int i = 1; i <= x; i++) ans *= n ;
	// cout<<ans<<endl;

	int n; cin>>n;
	int x; cin>>x;
	int binaryForm = x;
	int ans = 1; 

	while(binaryForm > 0)
	{
		if(binaryForm % 2 == 1)
		{
			ans *= n;
		}
		n *= n;
		binaryForm /= 2;
	}
	cout<<ans<<endl;
}