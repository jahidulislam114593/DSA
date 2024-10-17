#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>a = {1, 2};
	vector<int>b = {3, 4};
	int n1 = a.size(), n2 = b.size();

	vector<int>c;
	int i = 0, j = 0;
	while(i<n1 && j<n2)
	{
		if(a[i] < b[j]) c.push_back(a[i++]);
		else c.push_back(b[j++]);
	}
	while(i<n1) c.push_back(a[i++]);
	while(j<n2) c.push_back(b[j++]);

	int n = n1 + n2;
	if(n & 1)
	{
		cout<<c[n/2]<<endl;
	}else
	{
		cout << double(c[n/2] + c[n/2 - 1]) / 2.0 << endl;
	}


	return 0;
}