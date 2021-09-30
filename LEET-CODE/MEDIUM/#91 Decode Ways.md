### Question Link : https://leetcode.com/problems/decode-ways/ <br>

### Video Solution : https://www.youtube.com/watch?v=jFZmBQ569So <br>

SOLUTION 1 : ( ACCEPTED )

> not mine but faster and quicker maybe cp is used

```
class Solution {
public:
int numDecodings(string s)
{
int n=s.size();
vector dp(n+1,0);

    dp[0]=1;
    if(s[0]!='0')
        dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        int op1=(s[i-1]-'0');
        int op2=(s[i-2]-'0')*10+(s[i-1]-'0');
        
        if(op1>=1)
            dp[i]+=dp[i-1];
        if(op2>=10&&op2<=26)
            dp[i]+=dp[i-2];   
    }
    return dp[n];
}
};
```

SOLUTION 2 : ( Shows wrong answer in '1111111111111111111111111111' )

```
class Solution {
	public:
		int numDecodings(string str){
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
