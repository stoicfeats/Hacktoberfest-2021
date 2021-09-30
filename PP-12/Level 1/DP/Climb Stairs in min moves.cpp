#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int cs(int arr[], int n){
    int dp[n];
    dp[n-1] = 0;

    for(int i = n-2; i>=0; i--){
        int min_val = INT_MAX - 1;
        for(int jumps = 1; jumps <= arr[i]; jumps++){
            if(i+jumps<n){
                min_val = min(min_val, dp[i+jumps]); // dp[i+jumps] because we are moving from right to left 
            }
        }
        dp[i] = min_val+1; 
    }

    return dp[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}