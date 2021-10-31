> Contest Code : JUNE21C <br>
> Problem Code : COCONUT <br>

## Problem Link : https://www.codechef.com/JUNE21C/problems/COCONUT <br>

SOLUTION : ( ACCEPTED) <br>
Video(self) : 
```
#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
	int a,b,A,B;
	cin>>a>>b>>A>>B;
	int total_a,total_b;
	total_a = A/a;
	total_b = B/b;
 	cout<<total_b + total_a<<endl;
    }
	return 0;
}
```
