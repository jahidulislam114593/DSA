#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&arr, int n, int cows, int mid)
{
	int lastPlacedCow = arr[0];
	int cnt = 1;
	for(int i = 1; i<n; i++)
	{
		if(arr[i] - lastPlacedCow >= mid)
		{
			cnt++;
			lastPlacedCow = arr[i];	
		}
		if(cows == cnt) return true;
	}
	return false;
}

int main()
{
	vector<int>arr = {1, 2, 8, 4, 9};
	int n = arr.size();
	int cows = 3;
	sort(arr.begin(), arr.end());

	int st = 1;
	int end = arr[n-1] - arr[0];

	int ans = 0;
	while(st <= end)
	{
		int mid = st + (end - st) / 2;
		if(isPossible(arr, n, cows, mid))
		{
			ans = mid;
			st = mid + 1;
		}else
		{
			end = mid - 1;
		}
	}
	cout<<ans<<endl;
}	