### Question Link : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#


### Video Solution : https://www.youtube.com/watch?v=tCVOQX3lWeI

### Code Walkthrough : https://youtu.be/fQvzZuClViM

### Solution : (Accepted)

```
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
    vector<int> res;
    int nge[n];
    stack<int> stack;
    nge[n-1] = n;
    stack.push(n-1);

    for(int i=n-2;i>=0;i--){
        while(!stack.empty() && arr[i]>=arr[stack.top()]) stack.pop();
        nge[i] = stack.empty() ? n : stack.top();
        stack.push(i);
    }

    // for (auto i : nge) cout << i <<endl; 
    // i+k = window from current element, i =0,k=4; so window will be 0-4
    int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j = i; 
        }
        
        while(nge[j]<i+k){
            j = nge[j]; // if next greater element is in the window then j will move to that element and find it's ngr 
        }
        res.push_back(arr[j]);
    }
        return res;
    }
};
```

### SOLUTION : (ACCEPTED)

```
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
multiset<int,greater<int>> st;
for(int i = 0; i < k; i++) {
st.insert(arr[i]);
}
vector<int> ans; ans.push_back(*st.begin());
for(int i = 1; i <= n-k; i++) {
st.erase(st.find(arr[i-1]));
st.insert(arr[k+i-1]);
ans.push_back(*st.begin());
}
return ans;
    }
};
```
