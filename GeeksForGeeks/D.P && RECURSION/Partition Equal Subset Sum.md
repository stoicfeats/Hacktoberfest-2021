### Question : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

#### Solution Video : En https://youtu.be/w8hZyv5rulQ <br> 
> Solution : DP(memoziation)

```
int static t[1002][1002];
class Solution{
    
    int solve(int n,int arr[],int i,int sum)
    {
        if(sum==0)
            return 1;
        else if(i>=n || sum<0)
            return 0;
            
        if(t[i][sum]!=-1)
            return t[i][sum];
            
        return t[i][sum] = solve(n,arr,i+1,sum-arr[i]) || solve(n,arr,i+1,sum);
    }
    
    public:
    int equalPartition(int n, int arr[])
    {
        int sum =0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<n;i++)
            sum+=arr[i];
        if(sum & 1)
            return 0;
        return solve(n,arr,0,sum/2);
    }
};
```

Solution : DP(Tabulation)
Video : Sumit : https://www.youtube.com/watch?v=tRpkluGqINc&t=1556s
Mine Short Logic : https://youtu.be/NuRFpLgYd0s

```

class Solution{
public:
     int solve(int n,int arr[],int tar)
    {
        bool dp[n+1][tar+1];
        memset(dp,false,sizeof dp);
        for(int i =0;i<n+1; i++)
        {
            for(int j=0; j<tar+1; j++)
            {
                if(i==0 && j==0) // for (0,0)
                {
                    dp[i][j] = true;
                }else if(i == 0)
                {
                    dp[i][j] = false;
                }else if(j==0)
                {
                    dp[i][j] = true;
                }else
                {
                    if(dp[i-1][j] ==   true)
                    {
                        dp[i][j] = true;
                    }else
                    {
                        int val = arr[i-1];
                        if(val >= j)
                        {
                            if(dp[i-1][j-val]==true)
                            {
                                dp[i][j] = true;
                            }
                        }
                    }
            }   }
        }

    return dp[n][tar];
}

    
    int equalPartition(int N, int arr[])
    {
        int sum =0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        if(sum & 1)
            return 0;
        return solve(N,arr,sum/2);
    }
};
```
