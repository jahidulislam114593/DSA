#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int x; cin>>x;
	int ans = 1;
	for(int i = 1; i <= x; i++) ans *= n ;
	cout<<ans<<endl;
}