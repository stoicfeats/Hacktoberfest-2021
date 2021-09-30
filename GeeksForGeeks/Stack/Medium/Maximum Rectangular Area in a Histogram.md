### Question Link : https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#

### Solution Video : https://www.youtube.com/watch?v=J2X70jj_I1o&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=7

### Code Walkthrough (MINE) : 

SOLUTION 1 : (ACCEPTED)

> lengthy but detailed <br>
> aditya verma's

```
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], long n)
    {
    // right
    stack<pair<int, int>> s;
    vector<int> right,left;
    int index_right = n;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (s.empty())
            right.push_back(index_right);
        else if (!s.empty() && s.top().first < arr[i])
            right.push_back(s.top().second);
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
                s.pop();
            if (s.empty())
                right.push_back(index_right);
            else
                right.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    
    // left 
    stack<pair<int, int>> s;
    int index_left = -1;
    for (long long i = 0; i < n; i++)
    {
        if (s.empty())
            left.push_back(index_left);                      // nothing smaller on left
        else if (!s.empty() && s.top().first < arr[i])
            left.push_back(s.top().second);                 // found smaller on left-> add it to array
        else if (!s.empty() && s.top().first >= arr[i])     // didn't found smaller on left,keep popping 
        {
            while (!s.empty() && s.top().first >= arr[i])   // keep popping until one of the condition is false
                s.pop();
            if (s.empty())                                  // check which condition is flase
                left.push_back(-1);                         // if stack gone empty this means nothing smaller on left
            else
                left.push_back(s.top().second);             // if not then we have found a smaller element on left
        }
        s.push({arr[i], i});                                // push the current element with it's index
    }

    long long m = INT_MIN;
    reverse(right.begin(), right.end());                    // reverse for right vector
        for (long long i = 0; i < n; i++)
        {                                                   // width = right[i] - left[i] - 1; // -1 
            m = max(m,(right[i]-left[i]-1)*arr[i]);         // finding max area =  height*width 
        }
        return m;  
    }
};
```

SOLUTION 2 : ( SHORT BUT PRECISE ) 
> need not to use value just index will do 
> only place where value will be used is comparing greater or smaller 
```
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int>s;
        long long res=0;
        long long curr=0;
        for(int i=0;i<n;i++) { 
            while(s.empty()==false && arr[s.top()]>=arr[i])
            {
                int tp=s.top();
                s.pop();
                curr= arr[tp]*(s.empty()?i:(i-s.top()-1));
                res=max(curr,res);
            }
            s.push(i);
        }
        while(s.empty()==false)
        {
            int tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
            res=max(res,curr);
        }
        return res;
    }
};
```