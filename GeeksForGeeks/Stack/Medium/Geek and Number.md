### Question Link : https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#

### Video Solution : 


SOLUTION : (ACCEPTED)

```
class Solution{
public:
    int minLength(string s, int n) {
        map<string,int> mp;
        vector<string> v = {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
        for(auto i:v){
            mp[i]++;
        }
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else{
                string temp = "";
                temp += s[i];
                temp += st.top();
                if(mp[temp]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
            return st.size();
    } 
};
```