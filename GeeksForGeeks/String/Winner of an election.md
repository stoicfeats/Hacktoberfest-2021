### Question Link : https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#


### Video Solution : 

SOLUTION : ( ACCEPTED )

```
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        map<string, int> win;
        int max_votes = 0;
        string res;
        vector<string> final;
        for(int i=0; i<n; i++){
            win[arr[i]]++;
        
            if(win[arr[i]] > max_votes){
                max_votes = win[arr[i]];
                res = arr[i];
            }
            
            if(win[arr[i]] == max_votes){
                res = min(arr[i],res);
            }
        }
        final.push_back(res);
        final.push_back(to_string(max_votes));
        return final;
    }
};
```