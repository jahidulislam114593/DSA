#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i = 0;i < n; i++) cin>>arr[i];

	//Hashing 
	int hash[13] = {0};
	for(int i = 0; i<n; i++)
	{
		hash[arr[i]] += 1;
	}


	//Query
	int q; cin>>q;
	while(q--)
	{
		int n; cin>>n;
		cout<<n<<": "<<hash[n]<<endl;
	}
}