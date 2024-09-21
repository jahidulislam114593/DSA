#include<bits/stdc++.h>
using namespace std;

vector<int>pairSumBruteForce(vector<int> arr, int k)
{
	// return pair in sorted array with target sum
	//BruteForce TC--> O(n^2)

	int n = arr.size();
	vector<int> ans;
	for(int i = 0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(arr[i] + arr[j] == k)
			{
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}
	return ans;


}

vector<int>pariSumTwoPointer(vector<int>arr, int k)
{
	// Two Pointer Approch (Sorted) TC--> O(n)

	vector<int>ans;
	int n = arr.size();
	int i = 0;
	int j = n - 1;
	while(i != j)
	{
		int ps = arr[i] + arr[j];
		if(ps > k) j --;
		else if(ps < k) i++;
		else 
		{
			ans.push_back(i);
			ans.push_back(j);
			return ans;
		}


	}
	return ans;
}

int main()
{
	vector<int> nums ={2, 7, 11, 15};
	int target = 13; 
	
	vector<int>psBruteForce = pairSumBruteForce(nums, target);
	cout<<psBruteForce[0]<<", "<<psBruteForce[1]<<endl;

	vector<int>psTwopointer = pariSumTwoPointer(nums, target);
	cout<<psTwopointer[0]<<", "<<psTwopointer[1]<<endl;
}