### Question Link : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

### Video Solution : https://www.youtube.com/watch?v=p9T-fE1g1pU&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=6 

### Short Code Walkthrough : *to be uploaded soon* 
<br>
SOLUTION 1 : ( ACCEPTED )

> not aditya verma's solution <br>
> in this we need not to consider values, only index can be used

```
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       vector<int> v;
       stack<int> s;
       for(int i=0;i<n;i++){
           while(!s.empty() && arr[i]>=arr[s.top()])
           {
               s.pop();
           }
           
           int val = (s.empty())?i+1:i-s.top();
           v.push_back(val);
           s.push(i);
       }
       return v;
    }
};
```