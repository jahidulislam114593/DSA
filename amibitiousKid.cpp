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

	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
		arr[i] = abs(arr[i]);
		
	}
	int min_value = *min_element(arr, arr+n);
	cout<<min_value<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

	solve();
    return_loser;
}