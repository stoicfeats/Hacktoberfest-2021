## Question : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

### Solution Video : 

SOLUTION : (OPTIMAL)

```
include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

#include<algorithm>
#include<cmath>
class Solution

{
    public:
    void sort012(int a[], int n)
    {
        int lo = 0;
        int hi = n-1;
        for(int i=0;i<n;i++){
        while(a[i]==2 && i<hi) swap(a[i],a[hi--]);
        while(a[i]==0 && i>lo) swap(a[i],a[lo++]);
    }
        
    }
};

High and Low visualised : 
```
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

#include<algorithm>
#include<cmath>
class Solution

{
    public:
    void sort012(int a[], int n)
    {
        int lo = 0;
        int hi = n-1;
        for(int i=0;i<=hi;i++){
        while(a[i]==2 && i<hi) swap(a[i],a[--hi]);
        while(a[i]==0 && i>lo) swap(a[i],a[++lo]);
        
        cout<<"lo : "<<lo<<endl;
        cout<<"hi : "<<hi<<endl;
        
        for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
        
    }
    
    
};



// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

```

```
  
SOLUTION : (Striver's Approach) 
Video   :    https://www.youtube.com/watch?v=oaVa-9wmpns&t=2s
```
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size()-1;
        
        while(mid<=hi)
        {
            switch(nums[mid])
            {
                    // If element is 0
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                    
                    //If element is 1
                case 1: 
                    mid++;
                    break;
                
                    // If element is 2
                case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
            }
        }
    }
};
```

