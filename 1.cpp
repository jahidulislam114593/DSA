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
    int matrix[n][n];

    for(int i = 0; i<n; ++i)
    {
        for(int j = 0; j<n; ++j)
        {
            cin>>matrix[i][j];
        }
    }

    //linear search in 2d matrix;
    int key = 23;

    for(int i = 0; i<n; ++i)
    {
        for(int j = 0; j<n; ++j)
        {
            if(matrix[i][j] == key)
            {
                cout<<i<<" "<<j;
            }
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}