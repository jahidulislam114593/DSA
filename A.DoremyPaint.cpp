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
	int arr[n];
	map<int,int>freq;

	for(int i = 0; i<n; ++i)
	{
		cin>>arr[i];
		freq[arr[i]]++;
	}

	if(freq.size() > 2)
	{
		cout<<"No"<<'\n';
		return;
	}
	if(freq.size() == 1)
	{
		cout<<"Yes"<<'\n';
		return;
	}

	vector<int> ans;
	for(auto i:freq) ans.pb(i.second);

	if(abs(ans[0] - ans[1]) <= 1)
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