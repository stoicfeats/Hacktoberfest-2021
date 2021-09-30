## KADANE'S ALGO 

SOLUTION : BEST
Video : https://www.youtube.com/watch?v=VMtyGnNcdPw
```
int maxSubarraySum(int arr[], int n){
    int csum = arr[0];
    int osum = arr[0];
    
    for(int i = 1; i < n; i++){
        if(csum >= 0){
            csum+=arr[i];
        }
        else{
            csum=arr[i];
        }
        
        if(csum>osum){
            osum = csum;
        }
    }
    return osum;
}
```
