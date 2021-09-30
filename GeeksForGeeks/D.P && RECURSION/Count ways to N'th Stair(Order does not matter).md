## Question : https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1#

## Video code walkthrough : https://youtu.be/edjuC6TkXI4

Solution : (ACCEPTED) A slight variation of count stairs problem

```
class Solution{
	public:
		int nthStair(int n){
		    int dp[n+1];
		    long long int mod = 1000000007;
		    dp[0] = 1;
		    dp[1] = 1;
		    
		    for(int i=2;i<=n;i++){
		        dp[i]= (dp[i-2]+1)%mod; // formula to be used 
		    }
		return dp[n]%mod;
		    
		}
};
```
