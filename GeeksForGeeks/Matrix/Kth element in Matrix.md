## Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.<br>

### SOLUTION : 

```
#include <bits/stdc++.h> 
using namespace std; 

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int temp[n*n];
  int x = 0;
  
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        temp[x++]= mat[i][j];

  sort(temp,temp+x);
  return temp[k-1];
}
```