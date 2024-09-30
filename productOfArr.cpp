#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>arr = {4, 7, 2, 5};
	int n = arr.size();
	vector<int>ans(n, 1);

	// First pass: Build prefix product array
	for(int i =1; i < n; i++)
	{
		ans[i] = ans[i-1] * arr[i-1];
	}

	// Second pass: Multiply with suffix product
	int suffix = 1;
	for(int i = n-2; i >= 0; --i){
		suffix *= arr[i+1];
		ans[i] *= suffix;
	}

	for(auto x: ans) cout<<x<<" ";
	cout<<endl;
}