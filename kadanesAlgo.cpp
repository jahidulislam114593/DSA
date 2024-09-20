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

void subArray(vector<int> &arr){
	int n = arr.size();
	for(int i = 0; i<n;i++)
	{
		for(int j = i; j<n; j++)
		{
			for(int k = i; k<=j; k++){
				cout<<arr[k]<<" ";
			}cout<<endl;
		}
	}
}

int main()
{
	int n; cin>>n;
	vector<int> arr(n);
	for(int &val : arr) cin>>val;
	// cout<<kadanesAlgo(arr, n)<<endl;
	subArray(arr);
}