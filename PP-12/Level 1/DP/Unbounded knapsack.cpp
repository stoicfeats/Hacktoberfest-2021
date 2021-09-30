#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int val[],int weight[],int sum){
    int dp[sum+1] ={0};
    // for(int x=0; x<=sum+1; x++){
    //     dp[x] = 0;
    // }
    
    // for(int x=0; x<=sum+1; x++){
    //     cout<<dp[x]<<" ";
    // }
    dp[0] = 0;
    for(int i=1; i<=sum; i++){
        for(int j=0; j<n; j++){
            if(weight[j]<=i){
                dp[i] = max(dp[i],(dp[i-weight[j]]+val[j]));
            }

        }
    }
    // for(int x=0; x<=sum; x++){
    //     cout<<dp[x]<<" ";
    // }
    return dp[sum];
};


int main()
{ 
    int n;
    cin>>n;
    int val[n];

    for(int i=0;i<n;i++){
        cin>>val[i]; 
    }

    int weight[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int sum;cin>>sum;
    cout<<knapsack(n,val,weight,sum);
    return 0;
}