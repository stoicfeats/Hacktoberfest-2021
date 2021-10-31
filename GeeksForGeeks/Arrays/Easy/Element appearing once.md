```
#include<iostream>
using namespace std;
int main()
{
	int t,n,X;
    cin>>t;
    while(t--)
    {
      int size;
      cin>>size;
      int arr[size];
      X=0;
      while(size-->0)
      {
          cin>>n;
          X^=n; // using XOR of element because X)R is associative and communtative, which means = 7 ^ (3^3) ^ (4^4) ^ (5^5) = 7 ^ 0 ^ 0 ^ 0 = 7 
      }
      cout<<X<<endl;
    } 
}
```

	
