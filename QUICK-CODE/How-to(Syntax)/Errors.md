### 1. C compile error: “Variable-sized object may not be initialized” <br>

**If length is a variable, you need memset, but if length is a compile-time constant, then the statement compiles just fine.** <br>

This `int dp[amount+1] = {0};` will return compile time error 

Fix : `
int dp[amount+1] ;
memset(dp,0,sizeof(dp)); `

Read : https://stackoverflow.com/questions/3082914/c-compile-error-variable-sized-object-may-not-be-initialized