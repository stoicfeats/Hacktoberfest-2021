#include <stdio.h>
#define ll long long int
#define nl "\n"
#define sci(var) scanf("%lld", &var);
#define scc(var) scanf("%c", &var);
#define scs(var) scanf("%s", var);
#define pri(var) printf("%lld", var);
#define prc(var) printf("%c", var);
#define prs(var) printf("%s", var);

int main()
{

    ll n;
    sci(n);
    ll arr[n];

    // input of 1D arr
    for (int i = 0; i < n; i++)
    {
        sci(arr[i]);
    }
    ll row, col;
    sci(row);
    sci(col);
    if (n == row * col)
    {
        ll array[row][col];
        int curr = 0;

        //1D to 2D conversion
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                array[i][j] = arr[i * col + j];
                // curr++;
            }
        }

        //printing 2D array
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                pri(array[i][j]);
                prs(" ");
            }
            prs(nl);
        }
    }

    return 0;
}
