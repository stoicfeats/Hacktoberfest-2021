### Question Link : https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#
> same as Min Coin of GFG and #322 Coin Change of leetcode <br>

#322 : https://leetcode.com/problems/coin-change/
#Min Coin : https://practice.geeksforgeeks.org/problems/min-coin5549/1#


Solution : ( ACCEPTED )

```
class Solution{

	public:
	int minCoins(int coins[], int M, int amount) 
	{ 
	    int dp[amount+1];
        for(int i=0;i<=amount;i++){
            dp[i] = INT_MAX-1;
        }
        dp[0] = 0;
        
        for(int i=1; i<=amount; i++){
            for(int j=0; j<M; j++){
                if(i >= coins[j]){
                    dp[i] = min(dp[i],(1+dp[i -coins[j]])); 
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
	} 
	  
};
```