#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Brute Force 
	// vector<int> arr = {1, 2, 3, 4} ;
	// int n = arr.size();
	// int k = 2;

	// for(int i = 0; i<n; i++)
	// {
	// 	if(arr[i] <= k) k++;
	// 	else break;
	// }
	// cout<<k<<endl;


	//Binary Search
	// formula for missing element = arr[end] + more
	//more-> k - missing
	//missing -> arr[end] - (end+1)
	//ans = k + end + 1 or st + 1;

	vector<int> arr = {1, 2, 3, 4} ;
	int n = arr.size();
	int k = 2;

	int st = 0, end = n - 1;
	while(st <= end)
	{
		int mid = st + (end - st) / 2;
		int missing = arr[mid] - (mid + 1);
		if(missing < k) st = mid + 1;
		else end = mid - 1;
	}
	// cout<<st+k<<endl;
	cout<<end + k + 1;

}