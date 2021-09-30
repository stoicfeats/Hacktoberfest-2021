
## How to calculate power faster without using power function
### Video : https://youtu.be/Ln42-cWTcOI
### SOLUTION : (RECURSION) 

```
#include <iostream>
using namespace std;

int power(int num,int y){
    if(y==0){
        return 1;
    }

    int smallerAns = power(num,y/2);
    if(y%2==0){
        return smallerAns*smallerAns;
    }
    else{
        return num*smallerAns*smallerAns;
    }
}

int main() {
    int num,y;cin>>num>>y;
    cout<<power(num, y); 
    return 0;

}

```
