### Question Link : https://practice.geeksforgeeks.org/problems/remove-k-digits/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]StackproblemStatusunsolveddifficulty[]1page1category[]Stack#


### Video Solution : https://www.youtube.com/watch?v=RCE2L0Zk7xE
### Code Walkthrough : 

SOLUTION : (ACCEPTED)
```
class Solution {
public:
    string removeKdigits(string S, int K) {
    stack<char> st;
    for(int i=0;i<S.size();i++){
        while(!st.empty() && st.top()>S[i] && K>0){
            st.pop();
            K--;
        }
        st.push(S[i]);
    }
        while(K!=0){
            st.pop();
            K--;
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans ;
            st.pop();
        }
        while(ans.length()>0 && ans[0]=='0'){
            ans.erase(0,1);
        }   
        return ans.empty() ? "0" : ans;
    }
};
```