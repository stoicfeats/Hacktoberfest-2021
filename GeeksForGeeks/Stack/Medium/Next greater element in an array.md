### Question Link : https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

### Video Solution : https://www.youtube.com/watch?v=rSf9vPtKcmI


SOLUTION 1 : ( SHORT AND STEADY )

>0.45

```
class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v(n);
        stack<long long> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i] >= s.top()) s.pop();
            v[i] = s.empty() ? -1 : s.top();
            s.push(arr[i]);
        }
        return v;
    }
};
```

SOLUTION 2 : ( ACCEPTED )

> aditya verma<br>

```
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long> s;
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top()>arr[i])
            {
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=arr[i])
            {
                while(s.size()>0 && s.top()<=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }else{
                    v.push_back(s.top());
                    
                }
            }
            s.push(arr[i]);
        }
    reverse(v.begin(),v.end());
    return v;
}
};
```

SOLUTION 3 : IF ONLY INDEX IS REQUIRED IN ARRAY 

> this will return a vector containing all the index instead of values.
```
class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long> v(n);
       stack<long long> s;
       for(int i=n-1;i>=0;i--){
           while(!s.empty() && arr[i]>=arr[s.top()]) s.pop();   
           v[i] = s.empty() ? -1 : s.top();
           s.push(i);
       }
       return v;
    }
};
```