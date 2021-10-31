### Question Link : https://practice.geeksforgeeks.org/problems/save-gotham1222/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#


### Solution Video : https://youtu.be/azjBmmnuXAc

SOLUTION : (ACCEPTED)
> optimal approach
```
int save_gotham(int arr[], int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    int sum=0;
    for(int i=n-2; i>=0; i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        int curr = s.empty() ? 0 : s.top();
        sum = (curr+sum) % 1000000001;
        s.push(arr[i]);
    }
    return sum;
}
```