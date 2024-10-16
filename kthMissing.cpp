#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Problem: Find the k-th missing positive number in a sorted array
    // Two approaches are demonstrated below: 
    // 1. Brute Force Approach (commented out)
    // 2. Optimized Binary Search Approach

    // Brute Force Method (commented out)
    // This approach iterates through the array and increments `k` whenever an element 
    // less than or equal to `k` is encountered. If an element larger than `k` is found, 
    // it stops. The final value of `k` is the answer.
    
    /*
    vector<int> arr = {1, 2, 3, 4} ;
    int n = arr.size();
    int k = 2;

    // Iterate through the array
    for(int i = 0; i < n; i++)
    {
        // If the current element is less than or equal to k, increment k
        if(arr[i] <= k) k++;
        // Stop if we encounter an element greater than k
        else break;
    }
    // Print the final value of k
    cout << k << endl;
    */

    // Optimized Approach: Binary Search
    // In this approach, we use binary search to find the position of the k-th missing number
    // among the elements of the sorted array.

    // Initialize the sorted array and value of k
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    int k = 2;  // We want to find the 2nd missing positive number

    int st = 0, end = n - 1; 

    //binary search
    while (st <= end) {
        int mid = st + (end - st) / 2; 
        int missing = arr[mid] - (mid + 1);  // Calculate number of missing elements up to mid
        
        // If missing numbers up to mid is less than k, search the right half
        if (missing < k) st = mid + 1;
        // Otherwise, search the left half
        else end = mid - 1;
    }

    // Output the k-th missing number. Both formulas are equivalent:
    // Formula 1: st + k
    // Formula 2: end + k + 1
    cout << end + k + 1 << endl;  // Output the result
}
