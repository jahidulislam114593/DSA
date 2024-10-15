#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr = {1, 2, 3, 4} ;
	int n = arr.size();
	int k = 2;

	int current = 1;
	int missing = 0;
	int idx = 0;
	while(true)
	{
		if(idx < arr.size() && arr[idx] == current)
		{
			idx++;
		}else
		{
			missing++;
			if(missing == k) 
			{
				break;
			}
		}
		current++;
	}
	cout<<current<<endl;

}