### Question Link (GFG): https://practice.geeksforgeeks.org/problems/8c8f95810b05b4cab665f2997d36991bd58308a2/1/

### Solution Video : https://youtu.be/6rBdWEZJtSM

SOLUTION : (ACCEPTED)

```
class Solution{
    public:
    string Reduced_String(int k,string s){
        string ans="";
        if(k==1) return ans;
        stack<pair<char,int>> st;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                count = 1;
                st.push(make_pair(s[i],count));
            }else if(st.top().first==s[i]){
                count = st.top().second + 1;
                st.push(make_pair(s[i],count));
                if(count == k) {
                    while(count--) st.pop();
                }
            }else{
                count = 1;
                st.push(make_pair(s[i],count));
            }
            
        }
        
        while(!st.empty()){
            ans += st.top().first;;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```