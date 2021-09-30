
#include <bits/stdc++.h>
using namespace std;


int maxGold(int n, int m, vector<vector<int>> M)
    {
        int res = INT_MIN;
        vector<vector<int>> dp(n+2, vector<int> (m+1, 0));
        for(int j=1; j<=m; j++){
            for(int i=1; i<=n; i++){
                dp[i][j] = max(dp[i-1][j-1], max(dp[i][j-1], dp[i+1][j-1])) + M[i-1][j-1];
            }
        }
        for(int i=0; i<=n; i++){
            res = max(res, dp[i][m]);
        }
        return res; 
};


int main(){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        cout<<maxGold(n, m, M);
    return 0;
}