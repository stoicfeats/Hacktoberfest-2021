### Question Link : https://leetcode.com/problems/sliding-window-maximum/submissions/


### Video Solution : https://www.youtube.com/watch?v=tCVOQX3lWeI

### Code Walkthrough : https://youtu.be/fQvzZuClViM

### Solution : (Accepted)

```
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
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


    int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j = i; 
        }
        
        while(nge[j]<i+k){
            j = nge[j]; 
        }
        res.push_back(arr[j]);
    }
        return res;
    }
};
```

>Runtime: 240 ms, faster than 78.82% of C++ online submissions for Sliding Window Maximum. <br>

>Memory Usage: 130.8 MB, less than 95.76% of C++ online submissions for Sliding Window Maximum.