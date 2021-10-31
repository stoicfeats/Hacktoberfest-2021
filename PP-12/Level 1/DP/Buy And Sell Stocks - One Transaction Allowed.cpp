#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // maintain a least so far;
    int lsf = INT_MAX;
    int pst = 0; //profit if sold today
    int op = 0; // overall profit
    
    for(int i=0;i<n;i++){
        if(arr[i]<lsf){ // is current price is lower than our overall lower price
            lsf = arr[i];
        }
        
        pst = arr[i]-lsf; // finding profit if we sell today
        
        if(pst>op){ // if profit is > previous profit 
            op = pst;
        }
    }
    cout<<op;
}