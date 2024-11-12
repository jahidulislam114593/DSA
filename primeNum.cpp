#include<bits/stdc++.h>
using namespace std;
 
#define PI                    acos(-1.0)
#define ll                    long long
#define pb                    push_back
#define return_loser          return 0;
 

bool isPrime (int n)
{
	if(n <= 1) return false;
	for(int i = 2; i*i<=n; ++i)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n;
		
		if(isPrime(n)) cout<<"Prime"<<endl;
		else cout<<"Not"<<endl;
		 		
    }
 
    return_loser;
}