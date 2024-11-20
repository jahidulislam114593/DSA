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
	int sum = 0;

	for(int i=0; i<n-1; ++i)
	{
		int x; cin>>x;

		sum += x;
	}

	cout<<-sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}