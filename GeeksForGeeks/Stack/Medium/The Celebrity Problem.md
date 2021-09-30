### Question Link : https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#


### Solution Video : https://www.youtube.com/watch?v=CiiXBvrX-5A

### Code walkthrough : https://youtu.be/WXfwMrXS_fY

### SOLUTION : (ACCEPTED) 

```
class Solution 
{
    public:
    int celebrity(vector<vector<int> >& arr, int n) 
    {
        
    stack<int> st;
    for(int i=0;i<n;i++){
    st.push(i);
    }   
    
    while(st.size()>1){
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();

        if(arr[i][j]==1){
            st.push(j);
        }else{
            st.push(i);
        }
    }
    
    int pot = st.top();
    st.pop();
    bool flag = true;
    for(int i=0;i<n;i++){
        if(i!=pot){
            if(arr[i][pot] == 0 || arr[pot][i] == 1){
                flag = false;
                break;
            }
        }
    }
    
    if(flag==true)
        return pot;
    else    
        return -1;
    }
};
```