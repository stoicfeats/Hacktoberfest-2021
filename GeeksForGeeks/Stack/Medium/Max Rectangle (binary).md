### Question Link : https://practice.geeksforgeeks.org/problems/max-rectangle/1

<br>

### Video Solution : https://www.youtube.com/watch?v=St0Jf_VmG_g&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=8
<br>

### Code Walkthrough (MINE) : *to be uploaded soon*

### STEPS : 
1. Use MAH (maximum area of histogram function)
*   find NSR
*   find NSL
*   find width array
*   find area array 
*   return max from area array
2.   Divide 2D matrix into 1D and treat every single row as 1D row and pass in MAH.
3.  Find max of all rows and return as answer

SOLUTION ( ACCEPTED ) : 
> aditya's MAH function shows TLE so used optimal MAH
> normal MAH also worked but shows TLE on GFG
```
class Solution
{
  public:
  
    int MAH(int *arr, int n)
    {
    stack<int>s;
    int max_area=0,area=0;
    int i=0;
    while(i<n){
        if(s.empty() or arr[s.top()]<=arr[i]){
            s.push(i);
            i++;
        }
        else{
            int top=s.top();
            s.pop();
            if(s.empty()){
                area=arr[top]*i;
            }
            else{
                area=arr[top]*(i-s.top()-1);
            }
            max_area=max(area,max_area);
        }
    }
    ///When array becomes empty, pop all the elements of stack:
    while(!s.empty()){
        int top=s.top();
        s.pop();
        area=arr[top]*(s.empty()?i:(i-s.top()-1));
        max_area=max(area,max_area);
    }
    return max_area;
}

        
    
    int maxArea(int M[MAX][MAX], int n, int m) {
       int *first = new int[m];
       int mx = 0;
       // adding first row so that we can do addition on it 
       for(int j=0;j<m;j++){
          first[j] = (M[0][j]);
       }
       mx = max(mx,MAH(first,m));
       
       for(int i=1;i<n;i++){
           for(int j=0;j<m;j++){
               if(M[i][j]==0){
                   first[j] = 0;
               }else{
                   first[j] += M[i][j];
               }
           }
           mx = max(mx,MAH(first,m));
       }
       return mx;
    }
};
```