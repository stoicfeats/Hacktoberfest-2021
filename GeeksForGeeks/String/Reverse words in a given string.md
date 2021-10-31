### Question Link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#

### Video Solution : 


SOLUTION : (ACCEPTED)

```

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string str = "";
        string result = "";
        string word;
        
        for(int i=0;S[i]!='\0';i++){
            if(S[i]=='.'){
                word = S[i]+str;
                str = "";
            }else{
                str+=S[i];
            }
            result = word + result;
            word = "";
        }
        // treating after last dot
        if(str!="")
            result = str+result;
        return result;
    } 
};
```