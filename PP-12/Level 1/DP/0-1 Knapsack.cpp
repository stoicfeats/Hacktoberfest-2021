#include<bits/stdc++.h>
using namespace std;

int kanpsack(count,arr,weight,sum){
    int dp[count+1][sum+1] = {0};
    for(int i=0;i<count+1;i++){
        for(int j=0;j<sum;j++){
            if(i==0||j==0){
                dp[i][j] = 0;
            }else {
                if(weight[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i-1]]+arr[i-1]); 
                }
            }
        }
    }
    return dp[count+1][sum+1];
}


int main{
    int count>>cin>>count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin>>arr[i];
    }
    int arr[count];
    for(int i=0;i<count;i++){
        cin>>weight[i];
    }
    int sum;cin>>sum;
    cout<<knapsack(count,arr,weight,sum);
    return 0;
}