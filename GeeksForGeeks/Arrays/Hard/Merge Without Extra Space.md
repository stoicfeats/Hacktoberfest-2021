### Quesiton Link : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#

### Video Solution : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#


SOLUTION : (ACCEPTED)

```
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
        int i = 0, j = 0, k = n - 1;
  
    // Untill i less than equal to k
    // or j is less tha m
    while (i <= k && j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else {
            swap(arr2[j++], arr1[k--]);
        }
    }
  
    // Sort first array
    sort(arr1, arr1 + n);
  
    // Sort second array
    sort(arr2, arr2 + m);
}
};
```