#include<bits/stdc++.h>
using namespace std;


//parameterized way
void factorial(int n, int sum)
{
	if(n == 1)
	{
		cout<<sum<<endl;
		return;
	}
	factorial(n-1, sum*n);
}

//functional way
int fac(int n)
{
	if(n == 1) return 1;
	return n * fac( n-1 );
}

int main()
{
	int n; cin>>n;
	// cout<<fac(n)<<endl;
	factorial(n, 1);
	return 0;
}