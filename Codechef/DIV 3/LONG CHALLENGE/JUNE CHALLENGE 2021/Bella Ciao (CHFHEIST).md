## Question Link : https://www.codechef.com/JUNE21C/problems/CHFHEIST/ <br>

## Video Solution : https://www.youtube.com/watch?v=oO-j4vyVKpI <br>


Solution : (Accepted)
**In C++:
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

**In Java:
```
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        try{
            long testcase = Integer.parseInt(reader.readLine());
            for(int i=0;i<testcase;i++){

                String[] arr = reader.readLine().split(" ");
                long D = Integer.parseInt(arr[0]);
                long d = Integer.parseInt(arr[1]);
                long p = Integer.parseInt(arr[2]);
                long q = Integer.parseInt(arr[3]);
                long sum =0;
                long n = D/d;
                sum= (p*n + ((q*((n-1)*n))/2))*d;
                
                if(D%d!=0){
                    sum = sum + (D%d)*(p+n*q);
                }
                System.out.println(sum);
            }
        } catch (Exception e){}
	  }
}
```
