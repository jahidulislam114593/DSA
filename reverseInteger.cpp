#include<bits/stdc++.h>
using namespace std;


// LeetCode 7. Reverse Integer
// Given a signed 32-bit integer x, 
// return x with its digits reversed. 
// If reversing x causes the value to 
// go outside the signed 32-bit integer 
// range [-231, 231 - 1], then return 0.

// Assume the environment does not allow 
// you to store 64-bit integers (signed or unsigned).



int main(){
	int n; cin>>n;
	int revN = 0;
	while(n != 0)
	{
		int ld = n % 10;
		n /= 10;
		//if revN * 10 > INT_MAX return 0 -> revN > INT_MAX / 10 -> same for INT_MIN as well
		if((revN > INT_MAX / 10)  || (revN < INT_MIN / 10)) return 0;
		revN = (revN * 10) + ld;
	}
	cout<<revN<<endl;
}