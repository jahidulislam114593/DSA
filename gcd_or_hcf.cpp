#include<bits/stdc++.h>
using namespace std;

// Approach 1: Iterating from 1 to min(n1, n2)
int gcdApproach1(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// Approach 2: Iterating from min(n1, n2) downwards
int gcdApproach2(int n1, int n2) {
    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break; // Stop as soon as the GCD is found
        }
    }
    return gcd;
}

// Approach 3: Using the Euclidean algorithm
int gcdApproach3(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    return (a == 0) ? b : a;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n1, n2;
        cin >> n1 >> n2;

        // Call and display GCD using different approaches
        // cout << "GCD (Approach 1): " << gcdApproach1(n1, n2) << endl;
        // cout << "GCD (Approach 2): " << gcdApproach2(n1, n2) << endl;
        cout << "GCD (Approach 3): " << gcdApproach3(n1, n2) << endl;
    }

    return 0;
}
