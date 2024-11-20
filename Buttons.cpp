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
	int a, b, c; cin>>a>>b>>c;

	if(c % 2 == 0)
		cout<<( a > b ? "First\n":"Second\n");
	else
		cout<<( b > a ? "Second\n":"First\n");

}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}