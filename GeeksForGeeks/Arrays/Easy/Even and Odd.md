### Video : https://youtu.be/16wQdyXw8hw <br>
### Question : https://practice.geeksforgeeks.org/problems/even-and-odd/0/?fbclid=IwAR3GxleU9Pd--gsdur57_Nkvc1gYeroot1IiRsC-pZyABi2FaoJKCCMWEaY

```
/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
#include<vector>
class Solution {
  public:
    void reArrange(int arr[], int n) {
        vector<int> even;
        vector<int> odd; 
        
        for(int i=0;i<n;i++)
            if(arr[i]%2==0)
                even.push_back(arr[i]);
            else 
                odd.push_back(arr[i]);
                
        
        int i =0;
        
        for(int k=0;k<n;k++){
            if(k%2==0)
            {
                arr[k]=even[i];
                
            }
            else
            {
                arr[k]=odd[i];
                i++;
            }
        }
        
    }
};

// { Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends

```
