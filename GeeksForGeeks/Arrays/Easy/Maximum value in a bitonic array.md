

```
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n)
	{
	    for(int i=0;i<n;i++)
	    {
	        if (arr[i+1]<arr[i])
	        {
	            return arr[i];
	            break;
	        }
	       
	    }
	    
	}
};

_____________________________________________________________USING SORTING TECHNIQUE___________________________________________________

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
cout<<arr[n-1]<<endl;
	}
	return 0;
}
```
