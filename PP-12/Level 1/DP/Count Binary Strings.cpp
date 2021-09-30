// code may look simple yet it's the logic which makes it's simple, must get that 2 1-D array of 0 and 1 ending subarray following the rule of no consecutive 0's.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int z1=1,o1=1,z2,o2;
    // z1 = old value of zero, o1 = old value of one, z2 = new value of zero, o2 = new value of one;
    for(int i=2; i<=n ;i++){
        o2 = z1+o1;
        z2 = o1;
        
        z1 = z2;
        o1 = o2;
    }
    cout<<o1+z1;
}