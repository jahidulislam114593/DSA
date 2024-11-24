#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define return_loser return 0;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 1; i < n - 1; ++i) {
        if (a[i - 1] + a[i + 1] == 4) {
            a[i] = 4 - a[i];
            i++;
        }
    }

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return_loser;
}
