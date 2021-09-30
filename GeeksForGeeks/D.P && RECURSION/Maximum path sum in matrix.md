# Question Link : https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1#

## Video Solution : https://youtu.be/FGgChPSskOU


### Solution : ( Accepted ) 
> instead of creating a new dp matrix we can just add the digits in the same matrix itself and in the end return the max value from last row
> it is pretty much same a gold mine problem but that was just from left to right, this is from top to bottom.
```
class Solution{
public:
    int maximumPath(int N, vector<vector<int>> arr)
    {
        // if(N==1)
        // return 1;
        // int dp[N][N];
        
        // // filling first row 
        // for(int j=0;j<N;j++){
        //     dp[0][j] = arr[0][j];
        // }
        
        for(int i=1;i<N;i++){
            
            arr[i][0] += max(arr[i-1][0],arr[i-1][1]);
            
            for(int j=1;j<N-1;j++){
                arr[i][j] += max(arr[i-1][j-1],max(arr[i-1][j],arr[i-1][j+1])) ;
            }
            
            arr[i][N-1] += max(arr[i-1][N-2],arr[i-1][N-1]) ;            
        }
            
            int max_sum =INT_MIN;
            for(int j=0;j<N;j++)
            {
                max_sum = max(max_sum,arr[N-1][j]);
            }
            return max_sum;
        }
};
```
