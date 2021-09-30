#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	    int inc = arr[0];
	    int exc = 0;
	    
	    for(int i=1;i<n;i++){
	        int new_inc = exc + arr[i];
	        int new_exc = max(inc,exc);
	    
	        inc = new_inc;
	        exc = new_exc;
	    }
	    
	    int ans = max(inc,exc);
	    cout<< ans;
	}
