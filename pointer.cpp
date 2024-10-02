#include<bits/stdc++.h>
using namespace std;

int main()
{
	//pointer
	int a = 45;
	int* ptr = &a;

	//pointer to pointer 
	int** parPtr = &ptr;

	//dereferance operator
	cout<<*(&a)<<endl;
	cout<<*(ptr)<<endl;

}