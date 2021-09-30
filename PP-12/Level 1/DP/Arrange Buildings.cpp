// update -> got 10/10, maybe due to modulo and long long it was happening.

#include<bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;

  long ocz = 1;
  long oco = 1;

  for (int i = 2; i <= n; i++) {
    long ncz = oco ;
    long nco = ocz + oco  ;

    ocz = ncz;
    oco = nco;
  }

  long long total = ocz + oco ;
  total = total * total;

  cout << total ;

}



