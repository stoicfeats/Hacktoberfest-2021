Question : https://www.codechef.com/START3C/problems/CCISLAND
Video
```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
            float x,y,x1,y2,z;
            cin >> x >> y >> x1 >> y2 >> z;
            float r1 = x/x1;
            float r2 = y/y2;
            if(min(r1,r2) < z)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
    }
    return 0;
}
```
