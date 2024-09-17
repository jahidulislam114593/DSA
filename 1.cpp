#include<bits/stdc++.h>
 
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i: v) cin>>i;

    sort(v.begin(), v.end());
    for(int i : v) cout<<i<<" ";
        cout<<endl;
    int sing = 0;
    for(int i = 1; i<v.size();i+=2)
    {  
        if(v[i] != v[i-1]){
            sing = v[i-1];
        }
    }
    cout<<sing<<endl;


}