### Question Link : https://practice.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]1page1category[]Strings#


### Video Solution : 

SOLUTION : (ACCEPTED)

```
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string upper;
        string lower;
        
        for(int i=0; i<n; i++){
            if(isupper(str[i])){
                upper.push_back(str[i]);
            }else{
                lower.push_back(str[i]);
            }
        }
        
        sort(upper.begin(),upper.end());
        sort(lower.begin(),lower.end());
        
        int j=0,k=0;
        string res;
        
        for(int i=0; i<n; i++){
            if(isupper(str[i])){
                res.push_back(upper[j++]);
            }else{
                res.push_back(lower[k++]);
            }
        }
        return res;
    }
};
```