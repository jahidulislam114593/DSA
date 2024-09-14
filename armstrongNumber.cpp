#include<bits/stdc++.h>
using namespace std;

int main()
{
	// You are given an integer ‘NUM’ . 
	// Your task is to find out whether 
	// this number is an Armstrong number or not.
	// A k-digit number ‘NUM’ is an Armstrong 
	// number if and only if the k-th power of each digit sums to ‘NUM’.
	
	int num; cin>>num;

	int sum = 0, cnt = 0;
	int dup = num;
	int n = num;
	while(n)
	{
		n/=10;
		cnt++;
	}
	while(num != 0)
	{
		int ld = num % 10;
		num /= 10;
		sum += pow(ld, cnt);
	}
	if(sum == dup ) cout<<"ArmStrong Number"<<endl;
	else cout<<"NOT"<<endl;
}