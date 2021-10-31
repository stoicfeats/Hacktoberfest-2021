// <!-- Debuged Errors :
// Error 1 : passing a 2D array was not a good idea, use vector instead
// Error 2 : Don't rely on single row value because n and m values can be different
// Error 3 : while filing 2D vector use both row(n) and col(m) to fill properly. -->


#include <bits/stdc++.h>
using namespace std;

int min_cost(vector<vector<int>>& grid)
{
        int m = grid.size();
        int n = grid[0].size(); 
        
        vector<vector<int>> sum(m, vector<int>(n, grid[0][0]));
        
        for (int i = 1; i < m; i++)
            sum[i][0] = sum[i - 1][0] + grid[i][0];
        for (int j = 1; j < n; j++)
            sum[0][j] = sum[0][j - 1] + grid[0][j];
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                sum[i][j]  = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
        return sum[m - 1][n - 1];
};

int main()
{
    int n,m;
    cin >> n>>m;
    vector<vector<int>> grid(n,vector<int>(m,-1));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> grid[i][j];
        }
    }
    cout << min_cost(grid);
    return 0;
} 

