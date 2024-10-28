#include<bits/stdc++.h>
using namespace std;

#define PI                    acos(-1.0)
#define ll                    long long
#define pb                    push_back
#define return_loser          return 0;

bool isAlphaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true; 
    }
    return false; 
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    cin.ignore(); // To ignore the newline character after t
    while(t--)
    {
        string s;
        getline(cin, s);

        // Remove all non-alphanumeric characters and check if empty
        string filtered = "";
        for(char ch : s) {
            if(isAlphaNumeric(ch)) {
                filtered += tolower(ch);
            }
        }

        if(filtered.empty()) {
            cout << "True" << endl; // An empty or space-only string is considered a palindrome
            continue;
        }

        // Check if filtered string is a palindrome
        int st = 0, end = filtered.size() - 1;
        bool isPalindrome = true;
        while(st < end)
        {
            if(filtered[st] != filtered[end])
            {
                isPalindrome = false;
                break;
            }
            st++;
            end--;
        }

        cout << (isPalindrome ? "True" : "False") << endl;
    }

    return_loser;
}
