#include<bits/stdc++.h>
using namespace std;

//BF->bruteForce approch
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

int main()
{
	vector<int> nums = {2, 2, 2, 1, 1};

	cout<<mejorityElementBF(nums)<<endl;
}