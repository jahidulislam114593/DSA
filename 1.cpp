#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0] == a[n-1])
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;

            string result(n,'R');
            result[n-1] = "B";
            cout<<result<<endl;
        }
    }

    return 0;
}