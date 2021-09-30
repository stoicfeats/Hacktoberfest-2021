### Question Link : https://practice.geeksforgeeks.org/problems/pangram-strings3155/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]0page1category[]Strings#


### Video Solution : 

SOLUTION : ( ACCEPTED )

```
class Solution{
public:	
	
	int isPanagram(string str)
	{
	    int pan[26] = {0};
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                pan[str[i]-'a']++;
            }else if(str[i]>='A' && str[i] <= 'Z'){
                pan[str[i]-'A']++;
            }
        }
        
        for(int i=0; i<26; i++){
            if(pan[i] == 0){ 
                return 0;
            }
        }
        return 1; 
	}

};
```