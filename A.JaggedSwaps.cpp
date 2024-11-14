#include<bits/stdc++.h>
using namespace std;
 
#define PI                    acos(-1.0)
#define ll                    long long
#define pb                    push_back
#define return_loser          return 0;
 
void solve()
{
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i<n; ++i) cin>>arr[i];
	if(arr[0] == 1) cout<<"YES"<<endl;	
	else cout<<"NO"<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int t; cin>>t;
    while(t--)
    {
		solve(); 		
    }
 
    return_loser;
}