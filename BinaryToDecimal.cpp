#include<bits/stdc++.h>
 
using namespace std;


int binaryToDecimal(int n)
{
	int ans = 0;
	int power = 1;
	while(n !=0 )
	{
		int rem = n % 2;
		n /= 2;

		ans += (rem * power);
		power *= 10;

	}
	return ans;
}

int main()
{
	int n; cin>>n; 
	for(int i = 2; i <= n ;i++){
		cout<<i<<" => "<<binaryToDecimal(i)<<endl;
	}
		
}