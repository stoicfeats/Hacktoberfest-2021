
#include<bits/stdc++.h>
using namespace std;

long long int count( int arr[], int len, int sum )
    {
       
    long long int dp[sum+1] = {0};
    dp[0]=1;
    for(int i=0;i<len;i++)
    {
        for(int j=arr[i];j<=sum;j++)
        {
        dp[j]+= dp[j-arr[i]];
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