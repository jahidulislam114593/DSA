#include<bits/stdc++.h>
using namespace std;


int main()
{
	// nums = [1,2,3,2,5]
	// nums = [3,4,5,1,12,14,13]

	vector<int> arr = {3, 4, 5, 1, 12, 14, 13};
	int sum = arr[0];
	int n= arr.size();

	for(int i = 1; i < n; i++)
	{
		if(arr[i] == arr[i-1] + 1)
		{
			sum += arr[i];
		}else break;
	}

	int missing = sum;
	bool found = true;

	while(found)
	{
		found = false;
		for(int i = 0; i<n; i++)
		{
			if(arr[i] == missing)
			{
				missing++;
				found = true;
				break;
			}
		}
	}
	cout<<missing<<endl;
	
	return 0;
}