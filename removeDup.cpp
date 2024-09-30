#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // int n = arr.size();
    // set<int> st;

    // // Insert unique elements into the set
    // for (int i = 0; i < n; i++)
    // {
    //     st.insert(arr[i]);
    // }

    // // Now overwrite the array using the set (which only contains unique elements)
    // int idx = 0;
    // for (auto i: st)
    // {
    //     arr[idx] = i;
    //     idx++;
    // }

    // cout<<idx<<endl;
    // // Print only the unique elements
    // for (int i = 0; i < idx; i++) 
    // {
    //     cout << arr[i] << " ";
    // }




	//two pointer approch 
	vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = arr.size();

    int i = 1;
    for(int j = 1; j < n; j++)
    {
    	if(arr[j] != arr[i-1])
    	{
    		arr[i] = arr[j];
    		i++;
    	}
    }

    for(int i: arr) cout<<i<<" ";
    	cout<<endl;

    cout<<i<<endl; // return i this is the answer


    return 0;
}
