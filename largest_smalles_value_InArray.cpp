#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int smallest = INT_MAX;
	int largest = INT_MIN;
	int arr[n];
	int smallIdx = 0;
	int largestIdx = 0;
	for(int i = 0 ;i< n; i++)
	{
		cin>>arr[i];
		if(arr[i] < smallest) // can use min function for that logic
		{
			smallest= arr[i];
			smallIdx = i;
		}

		if(arr[i] > largest) {
			largest = arr[i];
			largestIdx = i;
		}

		// smallest = min(arr[i], smallest); // by using min function
		// largest = max(arr[i], largest);
	}
	cout<<"Smallest: "<<smallest<<endl;
	cout<<"Idex of Smallest: "<<smallIdx<<endl;
	cout<<"Largest: "<<largest<<endl;
	cout<<"Idex of Largest: "<<largestIdx<<endl;

	

}