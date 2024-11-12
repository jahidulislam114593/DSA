#include<bits/stdc++.h>
using namespace std;
 
#define PI                    acos(-1.0)
#define ll                    long long
#define pb                    push_back
#define return_loser          return 0;
 
 int countPrime(int n)
 {
 	vector<bool>isPrime(n+1, true);
 	isPrime[0] = isPrime[1] = false;
 	
 	int cnt = 0;
 	
 	for(int i = 2; i*i <= n; ++i)
 	{
 		if(isPrime[i])
 		{
 			for(int j = i * 2; j<n; j += i)
 			{
 				isPrime[j] = false;
 			}
 		}
 	}

 	for(int i = 2; i<n; i++)
 	{
 		if(isPrime[i]) cnt++;
 	}
 	return cnt;
 }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int n; cin>>n;
    cout<<countPrime(n)<<endl;
 
    return_loser;
}