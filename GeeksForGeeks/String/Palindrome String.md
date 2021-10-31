Solution : 
```
#include <stdio.h> 
#include <string.h> 

//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	   int l = 0;
	   int h = S.length()-1;
	   
	   while(h>l)
	   {
	       if(S[l++]!=S[h--])
	        return 0;
	   }
	   return 1;
	}

};

```
