#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Brute Force TC-> O(n2)
	// vector<int>arr = {4, 7, 2, 5};
	// int n = arr.size();
	// vector<int>ans;
	// for(int i = 0; i<n; i++)
	// {
	// 	int product = 1;
	// 	for(int j = 0; j<n; j++)
	// 	{
	// 		if(i != j)
	// 			product *= arr[j];
	// 	}
	// 	ans.push_back(product);
	// }

	vector<int>arr = {4, 7, 2, 5};
	int n = arr.size();
	vector<int>ans(n, 1);

	for(int i =1; i < n; i++)
	{
		ans[i] = ans[i-1] * arr[i-1];
	}
	int suffix = 1;
	for(int i = n-2; i >= 0; --i){
		suffix *= arr[i+1];
		ans[i] *= suffix;
	}

	for(auto x: ans) cout<<x<<" ";
	cout<<endl;
}