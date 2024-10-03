#include<bits/stdc++.h>
using namespace std;


void changeA(int &b)
{
	b= 100;
}

void changeB(int *ptr){
	*ptr = 2000;
}

int main()
{
	// int a = 5;
	// int* p = &a;
	// int** q = &p;

	// cout<<*p<<endl; // 5
	// cout<<**q<<endl; // 5
	// cout<<p<<endl; // address of a
	// cout<<*q<<endl; // value of q

	//pass by referances using pointer
	int b = 20;
	changeB(&b);
	cout<<"//pass by referance using pointer"<<endl;
	cout<<"b: "<<b<<endl;


	//pass by referance using alias
	int a = 10;
	changeA(a);
	cout<<"//pass by referance using alias"<<endl;
	cout<<"a: "<<a<<endl;

}