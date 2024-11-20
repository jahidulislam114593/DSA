#include<bits/stdc++.h>
using namespace std;

#define PI                    acos(-1.0)
#define ll                    long long
#define vi                    vector<int>
#define pb                    push_back
#define return_loser          return 0;

const int N=1e5+10;

void solve()
{
	int n, k; cin>>n>>k;
	bool flag = false;
	for(int i = 0; i<n; ++i)
	{
		int x; cin>>x;
		if(x == k)
		{
			flag = true;
		}
	}
	if(flag)
	{
		cout<<"Yes"<<'\n';
	}else
	{
		cout<<"No"<<'\n';
	}
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}