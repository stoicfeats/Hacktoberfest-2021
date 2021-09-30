### Question Link : https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#

### Video Solution : 


SOLUTION : (ACCEPTED)
```
class Solution
{
    string rev(string temp){
    stack<char> s;
    for(auto it: temp) s.push(it);
    temp = "";
    while(!s.empty()){
        temp += s.top();
        s.pop();
    }
    return temp;
}
    
  public:
    string reverseWords (string s)
    {
       string temp = "";
    string res = "";
    for(auto it: s){
        if(it=='.'){
            res += rev(temp) + '.';
            temp = "";
        }else{
            temp += it;
        }
    }
    res += rev(temp);
    return res;
    }
};
```