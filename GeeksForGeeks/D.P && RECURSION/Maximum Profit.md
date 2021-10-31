## Question Link : https://practice.geeksforgeeks.org/problems/maximum-profit4657/1

## Video Solution : 


SOLUTION : (ACCEPTED) 

```
class Solution {
public:
int maxProfit(int k, int n, int A[]) {
int dp[k + 1][n];
for (int i = 0; i <= k; i++)
dp[i][0] = 0;
for (int j = 0; j < n; j++)
dp[0][j] = 0;
for (int i = 1; i <= k; i++) {
int max_so = INT_MIN;
for (int j = 1; j < n; j++) {
max_so = max( max_so , dp[i - 1][j - 1] - A[j - 1] );
dp[i][j] = max(dp[i][j - 1], max_so + A[j]);
}

}
return dp[k][n - 1];
}
```
