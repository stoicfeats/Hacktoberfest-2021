### Question Link : https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1#

Note : this is just another question based on 0/1 knapsack and using 2D DP, did it quick xD


SOLUTION : (ACCEPTED)

```
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
        
    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];

            // If i'th element is included
            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }

    int diff = INT_MAX;

    for (int j = sum / 2; j >= 0; j--) {
        if (dp[n][j] == true) {
            diff = sum - 2 * j;
            break;
        }
    }
    return diff;    
	} 
};
```