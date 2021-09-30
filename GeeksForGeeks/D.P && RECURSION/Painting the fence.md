
## Question Link : https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1# <br>

### Video Link : 
> Logic : https://www.youtube.com/watch?v=ju8vrEAsa3Q&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=26 <br>
> Code Walkthrough : 

Solution 1 : (ACCEPTED) 
```
class Solution{
    public:
    long long countWays(int n, int k){
        long long mod = pow(10,9)+7;
        
        long long dp[n+1];
        
        dp[1] = k;
        dp[2] = k*k;
        
        for(int i=3;i<=n;i++)
        {
            dp[i] = ((k-1)*(dp[i-1]+dp[i-2]))%mod;
        }
        return dp[n]%mod;
    }
};
```

Solution 2 : (NOT ACCEPTED) 

```
class Solution{
    public:
    long long countWays(int n, int k){
        long same = (k*1)%1000000007;
        long diff = k*(k-1)%1000000007;
        long total = (same + diff)%1000000007;
        
        for(long i=3;i<=n;i++){
            same = (diff*1)%1000000007;
            diff = (total*(k-1))%1000000007;
            total = (same + diff)%1000000007;
        }
    
        return total;
    }
};
```
