#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n, int cnt)
{
	if(n < i) return;
	cout<<n<<" ";
	cnt++;
	if(cnt > 10) {
		cout<<endl;
		cnt = 1;
	}
	rec(i, n-1, cnt);
}

int main()
{
	int n; cin>>n;
	rec(1, n, 1);
}