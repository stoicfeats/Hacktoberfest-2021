## Question Link : https://www.codechef.com/JUNE21C/problems/CHFHEIST/ <br>

## Video Solution : https://www.youtube.com/watch?v=oO-j4vyVKpI <br>


Solution : (Accepted)

```
#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main() {
ll tc;
cin >> tc;
while (tc--) {
ll D, d, p, q, result = 0;
cin >> D >> d >> p >> q;
ll left = D % d;
ll rounds = (D / d);
result = (rounds * p * d) + d * q * (rounds * (rounds - 1) / 2) + (p * left + (left * q * rounds));
cout << result << endl;
}
return 0;
}
```
