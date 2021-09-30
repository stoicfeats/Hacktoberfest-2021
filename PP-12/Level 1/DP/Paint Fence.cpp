#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int i=k,j=k*(k-1),x=0,y=0;
    for(int t=3;t<=n;t++){
        x = j;
        y = (i+j)*(k-1);

        i = x;
        j = y;
        
    }
    cout<< i+j;
}