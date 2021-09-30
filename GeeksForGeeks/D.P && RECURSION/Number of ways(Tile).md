### Question Link : https://practice.geeksforgeeks.org/problems/number-of-ways2552/1#


### Solution Video : https://www.youtube.com/watch?v=_c_R-uIi-zU&list=TLGGSPv0JY5jlnQxMjA5MjAyMQ


### SOLUTION : ( Accepted )

Basically it's a variation of fibonacci series or climb stairs

```
class Solution{
public:
    long long int arrangeTiles(int N){
        long long int dp[N+1] = {0};
        
        for(int i=1;i<=N;i++){
            if(i<4){
                dp[i] = 1;
            }else if(i==4){
                dp[i] = 2;
            }else{
                dp[i] = dp[i-1] + dp[i-4];
            }
        }
    return dp[N];
    }
};
```