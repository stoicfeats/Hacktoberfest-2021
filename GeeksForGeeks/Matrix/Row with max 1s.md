## Row with max 1s
https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

### SOLUTION : 

```
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int i,j,index=0 ,m1 = INT_MIN,m2=-1;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            index++;
	        }  
	    
	    if(m1<index and index!=0)
	        {
	            m1 = index;
	            m2 = i;
	        }
	       index = 0;
	    } 
	    return m2;
	}	
}; 
```
