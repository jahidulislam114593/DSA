#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&nums, int n, int m, int mid)
{
	int painter = 1, time = 0;
	for(int i = 0; i<n; i++)
	{
		if(time + nums[i] <= mid)
		{
			time += nums[i];
		}else
		{
			painter++;
			time = nums[i];
		}
	}
	return painter > m ? false : true;
}

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5};
	int n= nums.size();
	int m = 2;

	int st = *max_element(nums.begin(), nums.end());
	int sum = 0;
	for(int i: nums) sum += i;
	int end = sum;
	int ans = 0;
	while(st <= end)
	{
		int mid = st + (end - st) / 2;
		if(isPossible(nums, n, m, mid))
		{
			ans = mid;
			end = mid - 1;
		}else
		{
			st = mid + 1;
		}
	}
	cout<<ans<<endl;
}