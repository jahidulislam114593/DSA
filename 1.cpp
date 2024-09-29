#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Brute Force TC-> O(n2)
    vector<int>arr = {1, 2, 3, 4};
    int n = arr.size();
    vector<int>ans;
    int product = 1;
    for(auto i: arr) product *= i;

    for(int i = 0; i<n; i++)
        ans.push_back(product/arr[i]);

    for(auto x: ans) cout<<x<<" ";
    cout<<endl;
}