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
	int n, m; cin>>n>>m;
	string x, s; cin>>x>>s;

	bool flag = false;
	for(int i = 0; i<6;++i)
	{
		if(x.find(s) != -1)
		{
			flag = true;
			cout<<i<<'\n';
			break;
		}
		x+=x;
	}
	if(flag ==false) cout<<-1<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}