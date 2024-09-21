#include<bits/stdc++.h>
using namespace std;

vector<int>pairSum(vector<int> arr, int k)
{
	int n = arr.size();
	vector<int> ans;
	for(int i = 0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(arr[i] + arr[j] == k)
			{
				ans.push_back(arr[i]);
				ans.push_back(arr[j]);
				return ans;
			}
		}
	}
	return ans;
}

int main()
{
	vector<int> nums ={2, 7, 11, 15};
	int target = 22; 
	
	vector<int>sum = pairSum(nums, target);
	cout<<sum[0]<<", "<<sum[1]<<endl;
	
}