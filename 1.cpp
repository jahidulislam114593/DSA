#include <bits/stdc++.h>
using namespace std;

void factorial(int n) {
    vector<int> res(1,1);

    for(int x = 2; x <= n; ++x)
    {
        int carry = 0;
        for(int i = 0; i < res.size(); ++i)
        {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while(carry)
        {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(res.begin(), res.end());
    for(auto digit: res)
    {
        cout<<digit;
    }cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}
