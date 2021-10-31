## Question Link : https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1# <br>

## Video Solution : <br>
> Logic : https://www.youtube.com/watch?v=VT4bZV24QNo&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=22 <br>
> Code Walk through : 


### SOLUTION : (ACCEPTED) 
```
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int inc = arr[0];
	    int exc = 0;
	    
	    for(int i=1;i<n;i++){
	        int new_inc = exc + arr[i];
	        int new_exc = max(inc,exc);
	    
	        inc = new_inc;
	        exc = new_exc;
	    }
	    
	    int ans = max(inc,exc);
	    return ans;
	}
};
```
