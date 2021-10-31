## Question Link : https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1# <br>

## Solution Link : https://www.youtube.com/watch?v=odrfUCS9sQk&list=PL-Jc9J83PIiEZvXCn-c5UIBvfT8dA-8EG <br>


Solution : ( Accepted )

> leet code solution not getting accepted her for some reason, even after using DP :')


```
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
       int dp[n+1];
      int i,j;
      dp[1]=arr[0];
      int len=1;
      int ans=1;
      for(i=1;i<n;i++)
        {
            for(j=len;j>=1;j--)
                if(dp[j]<arr[i])
                    break;
                if(j==len)
                 len++;
                j++;
                dp[j]=arr[i];
                ans=max(len,ans);
        }
    return ans;
    }
};
```
