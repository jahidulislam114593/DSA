#include<bits/stdc++.h>
using namespace std;

int main()
{

	//Given an integer x, return true if x is a palindrome, 
	//and false otherwise.
	
	int n; cin>>n;
	if(n<0){
		cout<<"false"<<endl;
		return 0;
	}
	int dup = n;
	int rev = 0;
	while(n != 0)
	{
		int ld = n % 10;
		n/=10;
		rev = (rev * 10) + ld;
	}

	if(dup == rev) cout<<"true"<<endl;
	else cout<<"false"<<endl;

	return 0;
}