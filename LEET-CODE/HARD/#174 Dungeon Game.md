## Question Link : https://leetcode.com/problems/dungeon-game/

## Video Solution : 


SOLUTION : (ACCEPTED)

> spend a whole day of r&d on this, negative values cause the mess otherwise it's a variance of minimum path sum or gold mine type of problems

```
class Solution{

	public:
	int minPoints(vector<vector<int>> dungeon, int M, int N) 
	{ 
	    int row = dungeon.size();
        int col = dungeon[0].size();
        
        // declaring our dp
        int dp[row][col];
        for(int i = row-1 ; i>=0 ; i--){
            for(int j = col-1; j>=0; j--){
                if( i == row-1 && j == col-1){
                    dp[i][j] = dungeon[i][j]>=0?1:1-dungeon[i][j];
                }else if(i == row-1){ // last row
                    dp[i][j] = dp[i][j+1] - dungeon[i][j]>0?dp[i][j+1]-dungeon[i][j]:1;
                }else if(j == col-1){ // last col
                    dp[i][j] = dp[i+1][j] - dungeon[i][j]>0?dp[i+1][j]-dungeon[i][j]:1;
                }else{
                    dp[i][j] = min(dp[i][j+1]-dungeon[i][j]>0?dp[i][j+1]-dungeon[i][j]:1,
                                  dp[i+1][j]-dungeon[i][j]>0?dp[i+1][j]-dungeon[i][j]:1);

                }
            }
        }
        return dp[0][0];
    }
};

```

> Runtime: 16 ms, faster than 11.38% of C++ online submissions for Dungeon Game. <br>
> Memory Usage: 8.8 MB, less than 63.55% of C++ online submissions for Dungeon Game. 