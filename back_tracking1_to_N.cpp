#include<bits/stdc++.h>
using namespace std;


//print 1 to N by BackTracking 
void rec(int i, int n)
{
	if(i<1) return;
	rec(i-1, n);
	cout<<i<<" ";
}

int main(){
	int n; cin>>n; 
	rec(n, n);
	
}