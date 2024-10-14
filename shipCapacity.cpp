#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int days, int mid)
{
	int load = 0, used = 1;
	for(int i = 0; i<n; i++)
	{
		if(load+arr[i] <= mid)
		{
			load += arr[i];
		}else
		{
			used++;
			load = arr[i];
		}
	}
	return used > days ? false : true;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = arr.size();
	int days = 5;

	int st = *max_element(arr.begin(), arr.end());
	int sum = 0;
	for(int i : arr) sum += i;
	int end = sum;
	int ans = 0;
	while(st <= end)
	{
		int mid  = st + (end - st);
		if(isPossible(arr, n, days, mid))
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