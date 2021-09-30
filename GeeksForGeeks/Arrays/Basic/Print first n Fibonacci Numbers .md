## Question : https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1#

### Solution : 
```

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> arr(n,0);
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2]; 
        }
        return arr;
    }
};

```
