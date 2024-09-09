#include<bits/stdc++.h>
using namespace std;

int DecToBi(int value)
{
	//First Approach (Divide and Remainder):
	int binary = 0;
	int power = 1;
	while(value != 0)
	{
		int reminder = value % 2;
		value = value / 2;

		binary = (reminder * power) + binary;
		power = power * 10;
	}
	return binary;
}

int DecimalToBinary(int num){
	//Second Approach (Bitwise Operations)
	int ans = 0;
	int pow = 1;
	while(num != 0)
	{
		int bit = num & 1;
		num = num >> 1;

		ans += (bit * pow);
		pow *= 10;
	}
	return ans;
}


int main()
{
	int n; cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cout<<i<<" => "<<DecimalToBinary(i)<<endl;
	}
}