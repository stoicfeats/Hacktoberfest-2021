### Question Link : https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1/?problemStatus=unsolved&difficulty[]=1&page=1&category[]=Stack&query=problemStatusunsolveddifficulty[]1page1category[]Stack#

Solution : (ACCEPTED)

```
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        if(!st.empty()){
            int x = st.top();
            st.pop();
            
            clonestack(st,cloned);
            
            cloned.push(x);
        }
    }
};
```