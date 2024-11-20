#include<bits/stdc++.h>
using namespace std;

#define PI                    acos(-1.0)
#define ll                    long long
#define vi                    vector<int>
#define pb                    push_back
#define return_loser          return 0;

const int N=1e5+10;

int board[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
	{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
	{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
	{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
	{1, 2, 3, 4, 5, 5, 4 ,3, 2, 1},
	{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
	{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
	{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

void solve()
{
	int score = 0;
	for(int r = 0; r<10; ++r)
	{
		for(int c = 0; c<10; ++c)
		{
			char ch;
			cin>>ch;
			if(ch != '.')
			{
				score += board[r][c];
			}
		}
	}
	cout<<score<<'\n';	
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}