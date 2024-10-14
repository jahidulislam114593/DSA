#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&arr, int n, int h, int mid)
{
	int hourNeeded = 0;
	for(int i = 0; i<n; i++)
	{
		hourNeeded += (arr[i] + mid -1) / mid;
	}
	return hourNeeded <= h;
}

int main()
{
	vector<int> arr{3, 6, 7, 11};
	int n = arr.size();
	int h = 8;
	int st = 1;
	int end = *max_element(arr.begin(), arr.end());
	int ans = 0;

	while(st <= end)
	{
		int mid = st + (end - st) / 2;
		if(isPossible(arr, n, h, mid))
		{
			ans = mid;
			end = mid - 1 ;
		}else
		{
			st = mid + 1;
		}
	}
	cout<<ans<<endl;
}