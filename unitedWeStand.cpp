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
	vector<int>a(n);

	for(int i = 0; i<n; ++i) cin>>a[i];
	sort(a.begin(), a.end());

	if(a[0] == a[n-1])
	{
		cout<<-1<<'\n';
		return;
	}

	vector<int>b, c;

	for(int i = 0; i<n; ++i)
	{
		if(a[i] == a[0])
		{
			b.pb(a[i]);
		}else
		{
			c.pb(a[i]);
		}
	}

	if(b.empty() && c.empty()){
		cout<<-1<<'\n';
		return;
	}

	cout<<b.size()<<" "<<c.size()<<'\n';

	for(int x:b) cout<<x<<" ";
		cout<<'\n';
	for(int x:c) cout<<x<<" ";
		cout<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}