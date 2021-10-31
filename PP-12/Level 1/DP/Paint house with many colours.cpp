#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k;cin>>n>>k;
   int arr[n][k];
   // n = rows i.e total number of houses, k = columns i.e total number of colours
   for(int i=0;i<n;i++){
       for(int j=0;j<k;j++){
           cin>>arr[i][j];
       }
   }

   int dp[n][k];
   int least=INT_MAX,sleast=INT_MAX;
    // finding least and second least in first row;
   for(int j=0; j<k; j++){
       dp[0][j] = arr[0][j];

       if(arr[0][j]<least){
           sleast = least;
           least = arr[0][j];
       }else if(arr[0][j]<sleast){
           sleast = arr[0][j];
       }
   }


   for(int i=1;i<n;i++){
       // new least and second least for every row we traverse
       int nleast = INT_MAX, nsleast = INT_MAX;
       
       for(int j=0;j<k;j++){
           if(least!=dp[i-1][j]){
               dp[i][j] = least + arr[i][j]; // using least of above row
           }else {
               dp[i][j] = sleast + arr[i][j]; // using sleast of above row
           }

        // updating current least and current second least for current row
        if(dp[i][j]<=nleast){
           nsleast = nleast;
           nleast = dp[i][j];
       }else if(dp[i][j]<nsleast){
           nsleast = dp[i][j];
       }
           
       }
       // after moving onto the next row, updating final least and sleast 
       least = nleast;
       sleast = nsleast;
   }
   
cout<<least;

}