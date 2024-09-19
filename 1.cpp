#include<bits/stdc++.h>
using namespace std;

int main()
{
    int staff; cin>>staff;
    int rooms; cin>>rooms;
    int inc = staff;

    for(int i = 1; i<= staff; i++)
    {
        cout<<i<<": ";
        for(int j = i; j <= rooms; j = j + inc)
        {
            cout<<j;
            if( j + inc <= rooms) cout<<",";
        }
        cout<<endl;
    }
return 0;
}