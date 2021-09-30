
#include<bits/stdc++.h>
using namespace std;

int count( int arr[], int len, int sum )
    {
       
    int dp[sum+1] = {0};
    dp[0]=1;
    for(int i=1;i<sum+1;i++)
    {
        for(int j=0;j<len;j++)
        
        {
            if(i-arr[j] >= 0)
            {
            dp[i] += dp[i-arr[j]];
            }
        }
    }
        return dp[sum];
    };


int main()
{
		int len;
		cin>>len;
		int arr[len+1];
		for(int i=0;i<len;i++)
		    cin>>arr[i];
		int sum; cin>>sum;
		cout<<count(arr,len,sum);
    return 0;
}  