#include<bits/stdc++.h>
using namespace std;

//BF->bruteForce approch TC->O(n^2)
int mejorityElementBF(vector<int> &nums)
{
	int n = nums.size();
	for(int val: nums)
	{
		int freq = 0;
		for(int el : nums)
		{
			if(el == val){
				freq++;
			}
		}
		if(freq > (n/2)){
			return val;
		}
	}
	return -1;
}

//optimized by sorting TC-> O(nlogn)
int mejorityElementO(vector<int>&nums)
{
	int n = nums.size();
	sort(nums.begin(), nums.end());
	int freq = 1, ans = nums[0];
	for(int i = 1; i<n; i++)
	{
		if(nums[i] == nums[i-1]) freq++;
		else{
			freq = 1;
			ans = nums[i];
		}
		if(freq > n/2) return ans;
	}
	return -1;
}

//Most Optimized Moore's Voting algo TC->O(n)
	int mejorityElementM(vector<int>&nums)
	{
		int n = nums.size();
		int freq = 0, ans = 0;
		for(int i = 0; i<n; i++)
		{
			if(freq == 0) ans = nums[i];
			if(ans == nums[i]) freq++; // For getting same value freq++
			else freq--;
		}
		return ans;
	}

int main()
{
	vector<int> nums = {6, 5, 5};

	cout<<mejorityElementBF(nums)<<endl;
	cout<<mejorityElementO(nums)<<endl;
	cout<<mejorityElementM(nums)<<endl;
}