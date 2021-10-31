// logic : use index to buy and sell, buy till rise or equal, sell once it dips

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int buy = 0;
    int sell = 0;
    int profit = 0;
    
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            sell++;
        }else{
            profit += arr[sell]-arr[buy];
            buy = sell = i;
        }
    }
    profit += arr[sell]-arr[buy];
    cout<<profit;
    
}