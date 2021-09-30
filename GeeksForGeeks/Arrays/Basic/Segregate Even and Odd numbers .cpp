#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) 
	{
	    vector<int> even;
	    vector<int> odd;
	    sort(arr,arr+n);
	    
	    for(int i=0;i<n;i++)
            if(arr[i]%2==0)
	            even.push_back(arr[i]);
            else
	            odd.push_back(arr[i]);
       
       int k = 0;
	   for(int i=0;i<even.size();i++){
	       arr[k++]=even[i];
	   }
	   for(int i=0;i<odd.size();i++){
	       arr[k++] = odd[i];
	   }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
