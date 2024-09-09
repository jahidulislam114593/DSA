#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int binary)
{
	//First Approach (Divide and Remainder):
	int ans = 0;
	int pow = 1;

	while(binary != 0)
	{
		int rem = binary % 10;
		ans += rem * pow;

		binary = binary / 10;
		pow *= 2;
	}
	return ans;
}

int binNumToDecNum(int binary)
{
	//cin taking our input as decimal for that we have to take input as string or 
	// follow the first approch instead of bitwise approch
    int decimal = 0;
    int pow = 1;
    while(binary != 0)
    {
        int digit = binary % 10;  
        decimal += (digit * pow); 
        binary = binary / 10;   
        pow *= 2;               
    }
    return decimal;
}


int main()
{
	int binary; cin >> binary;

	cout<<binaryToDecimal(binary)<<endl;
	cout<<binNumToDecNum(binary)<<endl;
}