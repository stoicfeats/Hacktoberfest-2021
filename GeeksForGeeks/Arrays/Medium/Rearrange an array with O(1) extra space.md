## Question : https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays#

### Video Solution : https://youtu.be/mj9VXw-d8dc

SOLUTION : (Optimal)

```
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        for(int i=0;i<n;i++){
            arr[i]+=(arr[arr[i]]%n)*n;
        }
        
        for(int i=0;i<n;i++){
            arr[i] = arr[i]/n;
        }
        
    }
};

```
