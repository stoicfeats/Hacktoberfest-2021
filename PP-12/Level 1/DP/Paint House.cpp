#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    //arr[3] beacuse only 3 colours are there
    int arr[3][n];

    for (int j 
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                cin >> arr[i][j];
            }
        }
    // filling dp with zero
    int dp[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = 0;
        }
    }
    // first col will remain same
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[2][0] = arr[2][0];
    int res = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                dp[i][j] = min(dp[i + 1][j - 1], dp[i + 2][j - 1]) + arr[i][j];
            }
            else if (i == 1)
            {
                dp[i][j] = min(dp[i - 1][j - 1], dp[i + 1][j - 1]) + arr[i][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j - 1], dp[i - 2][j - 1]) + arr[i][j];
            }

            //if we are in last column, find out the min
            if (j == (n - 1))
            {
                res = min(res, dp[i][j]);
            }
        }
    }
    cout << res;
    return 0;
}