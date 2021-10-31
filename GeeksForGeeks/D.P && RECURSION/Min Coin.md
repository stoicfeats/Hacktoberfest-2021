### Question Link : https://practice.geeksforgeeks.org/problems/min-coin5549/1#

> variation/same of coin exchange problem of leetcode #322. Coin Change

## Code Walkthrough : *to be added soon*

Solution : ( Accepted )

```
class Solution{
	public:
	int MinCoin(vector<int>coins, int amount)
	{
	    int dp[amount+1];
        for(int i=0;i<=amount;i++){
            dp[i] = INT_MAX-1;
        }
        dp[0] = 0;
        
        for(int i=1; i<=amount; i++){
            for(int j=0; j<coins.size(); j++){
                if(i >= coins[j]){
                    dp[i] = min(dp[i],(1+dp[i -coins[j]])); 
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
	}
};
```