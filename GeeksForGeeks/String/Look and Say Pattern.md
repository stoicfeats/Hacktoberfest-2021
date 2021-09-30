### Question Link : https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#


### Video Solution : 


SOLUTION : (ACCEPTED)

```
class Solution
{
  public:
    string lookandsay(int n) {
        if(n==0) return "";
        string res = "1";
        while(--n){
            string cur = "";
            for(int i=0; i<res.size(); i++){
                int c = 1;
                while(i+1<res.size() && res[i]==res[i+1]){
                    i++;
                    c++;
                }
                cur += to_string(c)+res[i];
            }
            res = cur;
        }
        return res;
    }   
};
```