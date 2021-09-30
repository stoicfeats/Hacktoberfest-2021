### Question Link : https://practice.geeksforgeeks.org/problems/maximum-sum-problem2211/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming#

## Code Walkthrough : *to be inserted soon*

SOLUTION 1 : ( ACCEPTED )
```
class Solution
{
    public:
    int maxSum(int n)
    {
        if(n == 0)
        {
            return 0;
        }
        
        int dp[n + 1] = {0};
        for(int i = 1; i <= n; i++)
        {
            dp[i] = max(i, dp[i/2] + dp[i/3] + dp[i/4]);
        }
        
        return dp[n];
    }
};
```

SOLUTION 2 : (ACCEPTED) 
> SELF
```
class Solution
{
    public:
    
        int bd(int n)
        {
            if(n < 0) return 0;
            int sum = n/2 + n/3 + n/4;
            if(sum>n)
            {
                if(sum < bd(n/2) + bd(n/3) + bd(n/4))
                    return bd(n/2) + bd(n/3) + bd(n/4) ;
                else 
                    return sum;
            }
            return n;
        }
        
        int maxSum(int n)
        {
            bd(n);
        }
};
```