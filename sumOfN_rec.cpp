#include<bits/stdc++.h>
using namespace std;


//sum of first N number using recursion
//parameterized way
void sumOfN(int i, int sum){
	if(i < 1)
	{
		cout<<sum<<endl;
		return;
	}
	sumOfN(i-1, sum + i);
}

//funtional way
int sum(int n)
{
	if(n == 0) return 0;
	return n + sum(n - 1);
}

int main()
{
	int n;cin>>n;
	// sumOfN(n, 0);	
	cout<<sum(n)<<endl;
}