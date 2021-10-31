```
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    int K;
	    cin>>K;
	    sort(arr,arr+n);
	    cout<<arr[K-1]<<endl;
	}
}
```
