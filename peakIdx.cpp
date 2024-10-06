#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>&arr)
{
	int n = arr.size();
	int st = 1, end = n - 2;

	while(st <= end){
		int mid = st + (end - st) / 2;
		if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;

		if(arr[mid - 1] < arr[mid])
		{
			//left -> search on right
			st = mid + 1;
		}else
		{
			//right ->search on left
			end = mid - 1;
		}
	}
	return -1;
}

int main()
{
	vector<int>arr ={1, 2, 1};
	int result = peakIndex(arr);
	cout<<result<<endl;


}