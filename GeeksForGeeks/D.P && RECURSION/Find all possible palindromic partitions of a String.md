### Question : https://practice.geeksforgeeks.org/problems/find-all-possible-palindromic-partitions-of-a-string/1/?category[]=Recursion&category[]=Recursion&problemStatus=unsolved&page=1&query=category[]RecursionproblemStatusunsolvedpage1category[]Recursion#

#### Video Solution : <br>
> TUF - https://www.youtube.com/watch?v=WBgsABoClE0&t=446s <br>
> Sumit(for logic) - https://www.youtube.com/watch?v=wvaYrOp94k0
> Code explained : 

Solution : (Recursive) 
```
class Solution {
  public:
    bool ispalindromic(string str){
      int li=0;
      int ri=str.size()-1;
      while(li<ri){
          if(str[li]!=str[ri]){
              return false;
          }
          li++;
          ri--;
      }
      return true;
    }
    void solve(string str,vector<string> &waffer, vector<vector<string>> &kit_kat ) {
        if(str.size()==0){
            kit_kat.push_back(waffer);
            return;
        }
  
       for(int i=0;i<str.size();i++){
          string prefix = str.substr(0,i+1);
          string ros = str.substr(i+1);
          if(ispalindromic(prefix)){
              waffer.push_back(prefix);
              solve(ros,waffer,kit_kat);
              waffer.pop_back();
          }
        }
     }
     
    vector<vector<string>> getGray(string str) {
        vector<vector<string>> kit_kat;
        vector<string> waffer;
        string asf;
        solve(str,waffer,kit_kat);
        return kit_kat;
        // code here
    }
```
    
