```
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int x;
        cin>>x;
        int i;
        for(i =0;i<n;i++){
            if(a[i]==x){
                cout<<i<<endl;
                break;
            }
        }
        if(i==n){
            if(a[i-1]!=x){
                cout<<-1<<endl;
            }
        }
```
        
