#include<bits/stdc++.h>
 
using namespace std;

int main(){
    int n; 
    scanf("%d", &n);
    // cin>>n;
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d\n", sum);

}