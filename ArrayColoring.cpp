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
	int n; cin>>n;
	int cntOdd = 0, x;
	for(int i = 0; i<n; ++i)
	{
		cin>>x;
		if(x % 2) cntOdd++;
	}

	cout<< ((cntOdd % 2) ? "No\n":"Yes\n");
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}