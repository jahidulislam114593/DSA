#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr ={0, 1, 2, 2, 3, 0, 4, 2};
	int val = 2;
	int idx = 0;
	for(int i = 0; i<arr.size(); i++)
	{
		if(arr[i] != val)
		{
			arr[idx] = arr[i];
			idx++;
		}
	}
	cout<<idx<<endl;
	for(auto i: arr) cout<<i<<" ";
}