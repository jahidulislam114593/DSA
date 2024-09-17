#include<bits/stdc++.h>
using namespace std;

//print "name" N times using recursion
void rec(int i, int n)
{
	if(i>n) return;
	cout<<"jahid "<<endl;
	rec(i+1, n);
}

int main()
{
	int n; cin>>n;

	rec(1, n);
}