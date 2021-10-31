## Question : https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1# <br>


### Video Solution : https://www.youtube.com/watch?v=A6mOASLl2Dg&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=2 

SOLUTION : DP (TABULATION)

```
class Solution
{
    public:
    int countWays(int n)
    {
        int dp[n+1];
        long long int mod = 1000000007; 
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n]%mod;
    }
};

```
