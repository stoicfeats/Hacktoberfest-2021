## Question Link : https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1#

### Video Link : <br>
> Logic : https://www.youtube.com/watch?v=jFZmBQ569So <br>
> Code walkthrough : (SELF)  

### SOLUTION : (ACCEPTED 1D DP) 

```
class Solution {
	public:
		int CountWays(string str){
		    int size = str.size();
		    int dp[size];
		    dp[0] = 1;
		    if(str[0] == '0')
		        {
		        return 0;
		        }
		        
		    for(int i=1;i<size;i++)
		    {
		        if(str[i-1]=='0' && str[i] == '0'){
		            dp[i] = 0;
		        }
		        else if(str[i-1] == '0' && str[i] !='0'){
		            dp[i] = dp[i-1]%1000000007;
		        }
		        else if(str[i-1] != '0' &&  str[i] == '0')
		        {
		            if(str[i-1] == '1' || str[i-1] == '2'){
		                dp[i] = ((i>=2 ? dp[i-2] : 1))%1000000007;
		            }else {
		                dp[i] = 0;
		            }
		        }
		        else{
		            int last;
                    string sub_str = "";
                    sub_str = str.substr(i-1,2);
                    last = stoi(sub_str);
		            if( last <= 26){
		                dp[i] = (dp[i-1] + (i>=2 ? dp[i-2] : 1))%1000000007;
		            }
		            else 
		            {
		                dp[i] = dp[i-1]%1000000007;
		            }
		        }
		    }
		    // Code here
		return dp[size-1]%1000000007;
		}

};
```
