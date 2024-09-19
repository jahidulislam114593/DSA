#include<bits/stdc++.h>
using namespace std;

int kadanesAlgo(vector<int> &arr, int n)
{
	int sum = 0, maxSum = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
		if(sum > maxSum) maxSum = sum;
		if(sum < 0) sum = 0;
	}
	if(maxSum < 0) return 0;
	return maxSum;
}

int main()
{
	int n; cin>>n;
	vector<int> arr(n);
	for(int &val : arr) cin>>val;
	cout<<kadanesAlgo(arr, n)<<endl;
}