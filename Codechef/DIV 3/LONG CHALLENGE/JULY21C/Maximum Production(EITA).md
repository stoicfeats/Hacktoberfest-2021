## Question Link : https://www.codechef.com/JULY21C/problems/EITA/

Solution : (Accepted)

> Just need the max of 2 strategies

```
#include <iostream>
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int D = 7;
	    cout<<max((d*y)+((7-d)*z), (7*x))<<endl; // max(day * y + remaining days * z, 7*x)
	}
	return 0;
}
```