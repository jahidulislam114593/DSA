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


	//Array Pointer

	int arr[] ={1, 2, 3, 4, 5};
	cout<<arr<<endl; // arr is a pointer(o/p-> address)
	cout<<*arr<<endl; // arr always point to array's oth index (o/p-> 1)



	//Question 
	int arr2[] ={10, 20, 30, 40, 50};
	int *p = arr2;
	cout<<*p<<endl;
	cout<<*(p + 1)<<endl;
	cout<<*(p + 3)<<endl;
	p++;
	cout<<*p<<endl;

}