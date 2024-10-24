#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num1 = {1, 2, 3, 0, 0, 0};  // nums1 array with extra space
    vector<int> num2 = {2, 5, 6};           // nums2 array
    int m = 3, n = 3;  // m = number of valid elements in num1, n = size of num2

    // Brute Force Approach: Merging two arrays with extra space
    /*
    vector<int> c;  // Temporary vector to store the merged result
    int i = 0, j = 0;

    // Merge two arrays into a new one
    while(i < m && j < n) {
        if(num1[i] < num2[j]) c.push_back(num1[i++]);
        else c.push_back(num2[j++]);
    }

    // Append remaining elements from num1
    while(i < m) c.push_back(num1[i++]);

    // Append remaining elements from num2
    while(j < n) c.push_back(num2[j++]);

    // Output merged array
    for(int x : c) cout << x << " ";
    */

    // Approach 2: Merge in-place by appending and sorting
    /*
    for(int i = 0; i < n; ++i) {
        num1[m + i] = num2[i];  // Copy elements from num2 to the back of num1
    }
    sort(num1.begin(), num1.end());  // Sort the combined array

    // Output sorted merged array
    for(int x : num1) cout << x << " ";
    */

    // Optimized Two-pointer Approach: Merge from the back to avoid overwriting
    int idx = m + n - 1;  // Last index for the merged array in num1
    int i = m - 1;        // Pointer for the last valid element in num1
    int j = n - 1;        // Pointer for the last element in num2

    // Merge num1 and num2 from the end to the start
    while(j >= 0) {
        if(i >= 0 && num1[i] > num2[j]) {
            num1[idx] = num1[i--];  // If num1[i] is larger, place it in the current idx
        } else {
            num1[idx] = num2[j--];  // If num2[j] is larger, place it in the current idx
        }
        idx--;  // Move the index backward
    }

    // Output the final merged array
    for(int x : num1) cout << x << " ";

    return 0;
}
