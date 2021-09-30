## Question : https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#
### Video : 

### SOLUTION : (D.P)
> Logic
```
int fibo(long long int n, int*dp){
    if(n==0 || n==1){
        dp[n]=n;
        return n;
    }
    
    if(dp[n]!=-1)
        return dp[n];
        
    return dp[n] = (fibo(n-1,dp) + fibo(n-2,dp))%1000000007;
}


class Solution {
  public:
    long long int nthFibonacci(long long int n){
    int* dp = new int[n+1];
    for(int i =0;i<=n;i++){
        dp[i]=-1;
    }
    return fibo(n,dp);// code here
    }
};
```
> Full Code 

```
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

int fibo(long long int n, int*dp){
    if(n==0 || n==1){
        dp[n]=n;
        return n;
    }
    
    if(dp[n]!=-1)
        return dp[n];
        
    return dp[n] = (fibo(n-1,dp) + fibo(n-2,dp))%1000000007;
}


class Solution {
  public:
    long long int nthFibonacci(long long int n){
    int* dp = new int[n+1];
    for(int i =0;i<=n;i++){
        dp[i]=-1;
    }
    return fibo(n,dp);// code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
```

### Method 3 : D.P (Bottom Up Approach) 
```
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        int dp[1000] ={0};
        
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
    }
};
```
