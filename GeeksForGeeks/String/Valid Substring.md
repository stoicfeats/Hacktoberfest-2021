### Question Link : https://practice.geeksforgeeks.org/problems/valid-substring0624/1#

SOLUTION : (ACCEPTED)

```
class Solution{
public:
    int findMaxLen(string S){
        int left =0, right =0, maxlen = 0;
        // for left to right scan
        
        for(int i=0;i<S.size();i++){
            if(S[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(left==right){
                maxlen = max(maxlen,2*right);
            }else if(right>=left){
                left = right = 0;
            }
        }
        
        left = right = 0;
        for(int i=S.size()-1;i>=0;i--){
            if(S[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(right==left){
                maxlen = max(maxlen,2*left);
            }else if(left>=right){
                left = right = 0;
            }
            
        }
        return maxlen;
    }
};
```