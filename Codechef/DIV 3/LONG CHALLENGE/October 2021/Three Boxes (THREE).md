>Contest Code : OCT21C <br>
>Problem Code : THREEBOX <br>

## QUESTION LINK : https://www.codechef.com/OCT21C/problems/THREEBOX/
Solution : (Accepted)

```
#include <iostream>
using namespace std;

int main() 
{
    int t; cin>>t;
	  while(t--)
    {
	       int a,b,c,n; 
         cin>>a>>b>>c>>n;
	    
	       if((a+b+c)<=n) 
             cout<<"1\n";
             
	       else if(a+b<=n || a+c<=n || b+c<=n) 
             cout<<"2\n";
             
	       else cout<<"3\n";
    } 
   
return 0;
}

```
