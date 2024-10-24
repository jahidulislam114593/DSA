#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3};  // Example input

    int n = A.size();
    int pivot = -1;

    // 1st step: Find the pivot element
    // The pivot is the first element from the end where A[i] < A[i + 1]
    for (int i = n - 2; i >= 0; --i) {
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If no pivot is found, the array is in descending order,
    // reverse it to get the smallest lexicographical permutation
    if (pivot == -1) {
        reverse(A.begin(), A.end());
    } else {
        // 2nd step: Find the next larger element to swap with pivot
        for (int i = n - 1; i > pivot; --i) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // 3rd step: Reverse the elements to the right of the pivot to get the next permutation
        reverse(A.begin() + pivot + 1, A.end());
    }

    // Output the next permutation
    for (int x : A) cout << x << " ";

    return 0;
}
