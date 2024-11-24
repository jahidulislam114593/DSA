#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define ll long long
#define vi vector<int>
#define pb push_back
#define return_loser return 0;

const int N = 1e5 + 10;

bool is_feasible(const vi &A, int N, int K, int x) {
    int changes = 0;
    int start = A[0] - x, end = A[0] + x;
    
    for (int i = 1; i < N; i++) {
        int new_start = A[i] - x, new_end = A[i] + x;
        if (new_start > end || new_end < start) {
            changes++;
            start = new_start;
            end = new_end;
        } else {

            start = max(start, new_start);
            end = min(end, new_end);
        }
        if (changes > K) return false;
    }
    return changes <= K;
}

void solve() {
    int N, K;
    cin >> N >> K;
    vi A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int low = 0, high = *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end());
    int answer = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (is_feasible(A, N, K, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return_loser;
}
