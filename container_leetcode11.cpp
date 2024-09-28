#include<bits/stdc++.h>
using namespace std;

int main()
{
	//BruteForce 
	vector<int> arr ={1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = arr.size();
	int mx_area = 0;

	for(int left = 0; left<n; left++)
	{
		int area = 0;
		for(int right = left+1; right<n; right++)
		{
			int width = right - left;
			int height = min(arr[right], arr[left]);
			area = height * width;
			mx_area = max(mx_area, area);
		}
		

	}
	cout<<mx_area<<endl;
}