## Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

### SOLUTION : 

```
class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& m, int n) 
    { 
        for(int i=0;i<n;i++)
            reverse(m[i].begin(), m[i].end());
        
        // transpose the array
        int i =0,j=0;
        for(i=0;i<n;i++)
            for(j=0;j<i;j++)
            {
                swap(m[i][j], m[j][i]);
            }//reverse it   
   
    }
};
```
