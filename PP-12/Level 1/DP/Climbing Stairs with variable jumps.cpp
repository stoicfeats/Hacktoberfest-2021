#include <iostream>
#include <limits.h>
using namespace std;

int cs(int arr[], int n){
    int dp[n+1] = {};

    dp[n+1] = 0;
    if(arr[n]!=0) dp[n] = 1;
    else dp[n] = 0;
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] > 0) {
            int min_val = INT_MAX;
            for(int jumps = 1; jumps <= arr[i]; jumps++){
                if(dp[i+j] != null)
                min_val = min(min_val,arr[i+jumps]);
            }
            
        }
    }

    return 0;
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