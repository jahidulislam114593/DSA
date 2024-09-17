#include<bits/stdc++.h>
using namespace std;


//print N to 1 by BackTracking 
void rec(int i, int n)
{
	if(i>n) return;
	rec(i+1, n);	
	cout<<i<<" ";
}

int main(){
	int n; cin>>n; 
	rec(1, n);
	
}