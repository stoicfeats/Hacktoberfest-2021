## Check if the number is balanced <br>

### Question Link : https://practice.geeksforgeeks.org/problems/check-if-the-number-is-balanced3014/1

### Video Solution : https://youtu.be/QAh9XiiPFXU <br>

SOLUTION : ( ACCEPTED )

```
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int ls,rs;
	    int mid = N.size()/2;
	    for(int i=0;i<N.size();i++){
	        if(i<mid) ls += (N[i]-'0');
	        else if(i>mid) rs += (N[i]-'0');
	    }
	    return ls == rs;
	}
};
```