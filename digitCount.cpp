#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int cnt = 0;
	while(n > 0){
		int lastDigit = n % 10;
		n /= 10;
		cnt++;
	}
	cout<<cnt<<endl;
}