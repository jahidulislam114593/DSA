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
    int key = 2;

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
    cout<<'\n';

    //maximum row sum
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; ++i)
    {
        for(int j = 0; j<n; ++j)
        {
            sum+=matrix[i][j];
        }
        maxSum = max(maxSum, sum);
        sum = 0;
    }
    cout<<maxSum<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--) solve();
    return_loser;
}