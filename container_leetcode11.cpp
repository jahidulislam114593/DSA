#include<bits/stdc++.h>
using namespace std;

int main()
{
	//BruteForce 
	// vector<int> arr ={1, 8, 6, 2, 5, 4, 8, 3, 7};
	// int n = arr.size();
	// int mx_area = 0;

	// for(int left = 0; left<n; left++)
	// {
	// 	int area = 0;
	// 	for(int right = left+1; right<n; right++)
	// 	{
	// 		int width = right - left;
	// 		int height = min(arr[right], arr[left]);
	// 		area = height * width;
	// 		mx_area = max(mx_area, area);
	// 	}
		

	// }
	// cout<<mx_area<<endl;


	//Two Pointer Approch ->O(n)
	vector<int> arr ={1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = arr.size();

	int lp = 0, rp = n-1;
	int maxWater = 0;
	while(lp < rp)
	{
		int w = rp - lp;
		int ht = min(arr[lp], arr[rp]);
		int currrentWater = w * ht;
		maxWater = max(maxWater, currrentWater);

		arr[lp] < arr[rp] ? lp++ : rp--;
	}
	cout<<maxWater<<endl;
}