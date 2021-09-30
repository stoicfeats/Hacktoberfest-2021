// jumps : 3 
// recursive solution 
#include <iostream>
using namespace std;

int cs(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    return cs(n-1)+cs(n-2)+cs(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}

// recursive + memoization 

#include <iostream>
using namespace std;

int cs(int n, int dp[]){
    if(n==0) return 1;
    if(n<0) return 0;
    
    if(dp[n] != 0) return dp[n];

    return dp[n] = cs(n-1,dp)+cs(n-2,dp)+cs(n-3,dp);
}

int main(){
    int n;
    cin>>n;
    int dp[n+1] = {0};
    cout<<cs(n,dp)<<endl;
}

// tabluation 

#include <iostream>
using namespace std;

int cs(int n){
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];

}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}