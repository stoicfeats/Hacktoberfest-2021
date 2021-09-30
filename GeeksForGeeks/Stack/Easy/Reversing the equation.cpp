### Question Link : https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#

### Video Solution : 

SOLUTION : (ACCEPTED)

```
class Solution
{
  public:
    string reverseEqn (string s)
        {string sec ="";
            stack<string> st;
            for(int i=0;i<s.size();++i){
                if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                    st.push(sec);
                    string aux ="";
                    aux += s[i];
                    st.push(aux);
                    sec ="";
                }else{
                    sec += s[i] ;
                }
            }
            st.push(sec);
            string res ="";
            while(!st.empty()){
                res += st.top();
                st.pop();
            }
            return res;
        }
};
```