### Question Link : https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1#

### Solution Video : https://www.youtube.com/watch?v=jgps7MXtKRQ&list=TLGGI2i7B-86cBgwNTA5MjAyMQ


1. It's basically unbounded knapsack and can be done by recursion, 2D and 1D DP
2. arr[j-1]!=-1 : this is used to check if the value in arr is not given as  -1
3. Need to take care of few things whenever it's minimum, insert DP with INT_MAX not 0, use vector and maybe long long if int doesn't work


### SOLUTION : (ACCEPTED)

```
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	#define INF (int) 1e9
	int minimumCost(int arr[], int N, int W) 
	{ 
        vector<int> dp(W+1, INT_MAX);
        dp[0] = 0;
        for(int i=1;i<=W;i++){
            for(int j=1; j<=N && j<=i;j++){
                if(arr[j-1]!=-1 && dp[i-j]!=INT_MAX){
                dp[i] = min(dp[i],dp[i-j]+arr[j-1]);
                }
            }
            
        }
     return dp[W] == INT_MAX  ? -1 : dp[W];  
	} 
};
```