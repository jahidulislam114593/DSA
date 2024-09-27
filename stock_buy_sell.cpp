#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 6;
	vector<int>arr = {7 ,1, 5, 3, 6, 4};
	
	//BruteForce
	// int maxProfit = 0;
	// for(int i = 0; i<n; i++)
	// {
	// 	for(int j = i+1; j<n; j++)
	// 	{
	// 		if(arr[i] < arr[j])
	// 		{
	// 			int profit = arr[j] - arr[i];
	// 			maxProfit = max(maxProfit, profit);
	// 		}
	// 	}
	// }
	// cout<<maxProfit<<endl;

	int maxProfit = 0;
	int bestBuy = arr[0];
	for(int i = 1; i<n; i++)
	{
		if(arr[i] > bestBuy)
		{
			int profit = arr[i] - bestBuy;
			maxProfit = max(profit, maxProfit);
		}
		bestBuy = min(bestBuy, arr[i]);
	}
	cout<<maxProfit<<endl;
}