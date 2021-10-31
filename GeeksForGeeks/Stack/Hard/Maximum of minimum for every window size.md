
### Question Link : https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#


SOLUTION : (ACCEPTED)

```
class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
    stack<int>st;
    int left[n],right[n];
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]<=arr[st.top()])
        st.pop();
        left[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    stack<int>s;
    st=s;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[i]<=arr[st.top()])
        st.pop();
        right[i]=st.empty()? n:st.top();
        st.push(i);
    }
    
    vector<int>ans(n+1,0);
    for (int i=0; i<n; i++) 
    { 
        int len=right[i]-left[i]-1; 
        ans[len]=max(ans[len],arr[i]); 
    } 
     for (int i=n-1; i>=1; i--) 
        ans[i] = max(ans[i], ans[i+1]);
        
    return vector<int>(ans.begin()+1,ans.end());
   
```