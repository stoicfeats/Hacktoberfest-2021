## Question : Minimum Cost Path <br>
https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1#

Solution (working on leet but need to use queue here) : 

```
#include <algorithm>
class Solution
{
    public:
    
    int min(int one, int two, int three, int four) 
    {
    int output = one; //as of now , we will be outputting one , except if we find a lower score.
    if(output > two) 
    { output = two;
    } // if output is proven to be bigger than two, two is our new output.
    if(output > three)
    { output = three;
        
    } //same operation with three
    if(output > four)
    { output = four;
        
    } // same operation with four
    return output;
}
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int N = grid.size();
        int dp[N][N];
        
        for(int i=0;i<N;i++){
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int j=0;j<N;j++){
            dp[0][j] = dp[0][j-1] + grid[0][j];
        }
        
        for(int i=1;i<N;i++){
            for(int j=1;j<N;j++){
                dp[i][j] = min(dp[i-1][j],dp[i][j-1],dp[i+1][j],dp[i][j+1]) + grid[i][j];
            }
        }
    return dp[N-1][N-1];
        
    }
};
```
