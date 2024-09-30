#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = arr.size();
    set<int> st;

    // Insert unique elements into the set
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    // Now overwrite the array using the set (which only contains unique elements)
    int idx = 0;
    for (auto i: st)
    {
        arr[idx] = i;
        idx++;
    }

    // Print only the unique elements
    for (int i = 0; i < idx; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
