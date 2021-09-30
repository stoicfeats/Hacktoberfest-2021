### Question Link : https://practice.geeksforgeeks.org/problems/common-subsequence-oldp3752/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#


### Video Solution : https://www.youtube.com/watch?v=H78IxUbiI9s

SOLUTION : ( ACCEPTED )

```
class Solution {
  public:
    int commonSubseq(string S1, string S2){
        vector<int> arr(26 , 0);
        for(auto it : S1){
            if(it>='A' && it<='Z') arr[it-'A']++;
        }
        for(auto it : S2){
            if(it>='A' && it<='Z' && arr[it-'A']) return 1; 
        }
        return 0;
    }
};
```
