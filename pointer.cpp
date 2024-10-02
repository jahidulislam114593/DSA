#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 45;
	int* ptr = &a;

	int** parPtr = &ptr;

	cout<< &ptr<<endl;
	cout<<parPtr<<endl;
}