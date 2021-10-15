>Contest Code : OCT21C <br>
>Problem Code : ANDSUBAR <br>

## QUESTION LINK : https://www.codechef.com/OCT21C/problems/ANDSUBAR/
Solution : (Accepted)

```
#include <iostream>
using namespace std;

int main() 
{   
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        
        if(n==1) 
        {
            cout<<1<<endl;
            continue;
        }
        int i=1;
        while(2*i<=n)
        {
            i=i*2;    
        }
        if(i==n)
            cout<<i/2<<endl;
        else
            cout<<max(n-i+1,i/2)<<endl;
    }
return 0;
}
```
