### Question Link : https://practice.geeksforgeeks.org/problems/355f731797ea1acbd5ab698b19eb1c3c469aa837/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&page=1&query=category[]StackproblemStatusunsolvedpage1category[]Stack#

### Video Solution : https://www.youtube.com/watch?v=S483HJ4pIg0
### Video Solution(Self) : *to be uploaded soon*

SOLUTION : (ACCEPTED)

```
class Solution{
public:
	bool recreationalSpot(int arr[], int n){
		if(n<3) return false;
        int arr1[n];
        arr1[0] = arr[0];
        stack <int> s;
        for(int i=1; i<n;i++){
            arr1[i] = min(arr1[i-1],arr[i]);
        }
        
        for(int j=n-1;j>=0;j--){
            if(arr[j]>arr1[j])
            {
                while(!s.empty() && s.top() <= arr1[j])
                    s.pop();
                if(!s.empty() && s.top() < arr[j])
                    return true;
                s.push(arr[j]);
            }
        }
    return false;
	}
};
```