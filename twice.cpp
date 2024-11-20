#include<bits/stdc++.h>
using namespace std;

#define PI                    acos(-1.0)
#define ll                    long long
#define vi                    vector<int>
#define pb                    push_back
#define return_loser          return 0;

const int N=1e5+10;

int countPair(vector<int>& a)
{
	map<int,int>mp;
	int score = 0;

	for(int num: a)
	{
		mp[num]++;
	}

	for(auto& entry: mp)
	{
		score += entry.second / 2;
	}
	return score;
}

void solve()
{

	int n; cin>>n;
	vector<int>a(n);
	for(int i = 0; i<n; ++i) cin>>a[i];

	cout<<countPair(a)<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}