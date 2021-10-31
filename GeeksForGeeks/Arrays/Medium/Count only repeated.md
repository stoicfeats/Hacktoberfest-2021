### Question Link : https://practice.geeksforgeeks.org/problems/count-only-repeated2047/1#
<br>

### CODE WALKTHROUGH : *to be inserted soon*


SOLUTION : ( ACCPTED )

// binary search solution ( faster 0.3/1.4) need to understand it once
```
class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        pair<int, int> p;
        p.first = -1;
        p.second = -1;
        if(arr[n-1]-arr[0] == n-1)
            return p;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]-arr[0] == mid)
                low = mid+1;
            else
                high = mid-1;
        }
        p.first =arr[high];
        p.second = n-arr[n-1]+1;
        return p;
    }
};
```
<br>

SOLUTION 2 : ( ACCEPTED )

```
// hasmaps soltuion done by me ( slower 1/1.4)
class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        map<int, int> m;
        pair<int, int> p;
        p.first = -1;
        p.second = -1;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
    //     for(auto i : m){
    //   cout<<i.first<<" "<<i.second<<"\n";
    // }
        for(auto i : m)   
            if(i.second!=1)
            {
                p.first = i.first;
                p.second = i.second;
            }    
        return p;
    }
};
```