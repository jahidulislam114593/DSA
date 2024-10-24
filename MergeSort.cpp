#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num1 = {1, 2, 3, 0, 0, 0};  // nums1 array
    vector<int> num2 = {2, 5, 6};           // nums2 array
    int m = 3, n = 3;  // m = number of valid elements in num1, n = size of num2

    // Brute Force Approach: Merging two arrays with extra space
    /*
    vector<int> c;
    int i = 0, j = 0;

    // Merge two arrays into a new one
    while(i < m && j < n) {
        if(num1[i] < num2[j]) c.push_back(num1[i++]);
        else c.push_back(num2[j++]);
    }
    while(i < m) c.push_back(num1[i++]);
    while(j < n) c.push_back(num2[j++]);

    // Output merged array
    for(int x : c) cout << x << " ";
    */

    //Approach: Merge in-place by appending and sorting
    for(int i = 0; i < n; ++i) {
        num1[m + i] = num2[i];  // Copy elements from num2 to the back of num1
    }
    sort(num1.begin(), num1.end());  // Sort the combined array

    // Output sorted merged array
    for(int x : num1) cout << x << " ";

    return 0;
}
