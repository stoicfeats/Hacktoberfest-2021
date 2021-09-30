## Problem Link : https://www.codechef.com/JULY21C/problems/RELATIVE/

Solution : (Accepted)

> Basic Math problem, just use the correct formula

```
#include <iostream>
using namespace std;

int main() {
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int g,c;
        cin>>g>>c;
        
        cout<<(c*c)/(2*g)<<endl;
    }
	return 0;
}
```