##### Question Link : https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=1&query=category[]Dynamic%20Programmingpage1category[]Dynamic%20Programming#

> Similar to Min Coin, Number of Coin and #322 of leetcode

Solution : ( Accepted )

```
long long int count(long long int amount)
{
	vector<int> coins = {3,5,10};
    int dp[amount+1] ;
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
        
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<amount+1;j++){
                dp[j] += dp[j-coins[i]];
            }
        }
        return dp[amount];
};
```