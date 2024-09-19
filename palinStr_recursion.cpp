#include<bits/stdc++.h>
using namespace std;

bool palindromeString(int i,string s)
{
	int n = s.size();
	if(i>= n/2) return true;
	if(s[i] != s[n-i-1]) return false;
	return palindromeString(i+1,s);	
}

int main()
{
	string s; cin>>s;
	if(palindromeString(0,s))
	{
		cout<<"True"<<endl;
	}else cout<<"False"<<endl;
}