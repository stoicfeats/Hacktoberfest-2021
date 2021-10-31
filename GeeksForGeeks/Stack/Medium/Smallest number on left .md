## Question Link : https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1#

### Video Solution : *to be inserted soon*

SOLUTION : ( ACCEPTED )

```
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
    vector<int> ans(n);
    stack<int> st;
    ans[0]=-1;
    st.push(a[0]);
    for(int i=1;i<n;i++){ 
        
    while(!st.empty()and st.top()>=a[i])
    {
    st.pop();
    }

    if(st.empty())
    {
    ans[i]=-1;
    }
    else
    {
    ans[i]=st.top();
    }

    st.push(a[i]);
    }
return ans;
}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
```