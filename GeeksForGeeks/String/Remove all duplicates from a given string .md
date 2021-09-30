## Remove all duplicates from a given string

### Question Link 1 : https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1 
### Question Link 2 : https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1 



### Video Solution : https://youtu.be/8c4qAr7Fuq0

<br>

>Example 1:
```
Input:
Str = geeksforgeeks
Output: geksfor
Explanation: After removing duplicate
characters such as e, k, g, s, we have
string as "geksfor".
```
SOLUTION 1 : ( ACCEPTED )

```
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    map<char, int> hstr;
	    string res;
	    for(int i=0;i<S.size();i++){
	        if(hstr[S[i]] == 0){
	            hstr[S[i]]++; // change the value to 1
	            res += S[i]; // include in string
	        }
	    }
	return res;
	}
	
};
```

SOLUTION 2 : ( ACCEPTED )

```
class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char, int> m;
	    string s;
	    for(int i = 0; i< str.size(); i++)
	    {
	        if(m[str[i]]==0)
	        {
	            s.push_back(str[i]);
	            m[str[i]]++;
	        }
	    }
	    str = s;
	    return s;
	}
};
```
