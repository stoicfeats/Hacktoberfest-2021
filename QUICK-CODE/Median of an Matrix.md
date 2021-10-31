## SOLUTION :
Video : https://www.youtube.com/watch?v=edEKbe5B_68
```
#include <algorithm>
#include <functional>
#include <array>
#include <bits/stdc++.h> 

using namespace std; 
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
       
       int temp[r*c];
       int k=0;
       int med=0;
       int n;
       for(int i =0;i<r;i++)
            for(int j=0;j<c;j++)
            temp[k++] = matrix[i][j];
            // n=k;
        sort(temp, temp+k);
        
        //n = temp.size();
        if(k%2!=0)
        {
            med = k/2;
            return temp[med];
        }
        else
        {
            med  = ((k/2)+((k+1)/2))/2;
            return temp[med];
        }
    }
}; 
```
