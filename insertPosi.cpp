#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&nums, int k)
{
	int lf = 0;
	int rg = nums.size() - 1;
	while(lf <= rg)
	{
		int mid = lf + (rg - lf)/2;
		if(nums[mid] == k)
		{
			return mid;
		}else if(nums[mid] < k)
		{
			lf = mid + 1;
		}else
		{
			rg = mid - 1;
		}
	}
	return lf;
}

int main()
{
	vector<int>nums = {1, 3, 5, 6};
	int k = 5;

	int result = binarySearch(nums, k);
	cout<<result<<endl;
	
}