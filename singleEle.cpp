#include<bits/stdc++.h>
using namespace std;


int singleElememt(vector<int>& arr)
{
	int n = arr.size();
	if(n == 1) return arr[0];
	
	int st = 1, end = n-2;

}

int main()
{
	vector<int> arr= { 3, 3, 7, 7, 10, 10, 11};

	int result = singleElememt(arr);
	cout<<result<<endl;
	
}