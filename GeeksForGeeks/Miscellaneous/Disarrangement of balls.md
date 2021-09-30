```
int solve (int n){
     {
      if(n==1)
            return 0;
        if(n==2)
            return 1;
    }
        
    return (n-1) * (solve(n-1) + solve(n-2));
}

class Solution{
public:
    long int disarrange(int N){
        return solve(N);
    }
};
```
