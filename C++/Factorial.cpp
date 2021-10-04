#include<iostream>

using namespace std;

int main(){
    int n,ans = 1;
    cout<<"Enter Number to find Factorial: ";
    cin>>n;

    for (int i = n; i>=1; i-- )
    {
        ans *= i;
    }
    cout<<n<<"! = "<<ans<<endl;
    return 0;
}