#include<bits/stdc++.h>
using namespace std;

#define PI                    acos(-1.0)
#define ll                    long long
#define vi                    vector<int>
#define pb                    push_back
#define return_loser          return 0;

const int N=1e5+10;

int rowSum(int mat[][3], int row, int col)
{
    int maxRowSum = INT_MIN;
    for(int i = 0; i<row; ++i)
    {
        int sum = 0;
        for(int j = 0; j<col; ++j)
        {
            sum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, sum);
    }

    return maxRowSum;
}

int colSum(int mat[][3], int row, int col)
{
    int maxColSum = INT_MIN;
    for(int i = 0; i<col; ++i)
    {
        int sum = 0;
        for(int j = 0; j<row; ++j)
        {
            sum += mat[j][i];
        }
        maxColSum = max(maxColSum, sum);
    }

    return maxColSum;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int mat[3][3];
    int row = 3;
    int col = 3;

    for(int i = 0; i<row; ++i)
    {
        for(int j = 0; j<col; ++j)
        {
            cin>>mat[i][j];
        }
    }

    cout<<rowSum(mat, row, col)<<endl;
    cout<<colSum(mat, row, col)<<endl;

    return_loser;
}