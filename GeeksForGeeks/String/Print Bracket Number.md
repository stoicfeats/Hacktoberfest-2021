### Question Link : https://practice.geeksforgeeks.org/problems/print-bracket-number4058/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#

### Video Solution : 


SOLUTION : ( ACCEPTED )

```
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    stack<int> s;
	    vector<int> v;
	    int count = 1;
	    
	    for(int i=0; i<S.size(); i++){
	        if(S[i]=='('){
	            s.push(count);
	            v.push_back(count);
	            count++;
	        }
	        
	        if(S[i] == ')')
	        {
	            v.push_back(s.top());
	            s.pop();
	        }
	  }
	    return v;
	}
};
```