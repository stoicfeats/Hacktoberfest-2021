### Question Link : https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1# <br>

### Solution Video : https://www.youtube.com/watch?v=C8UjlJZsHBw <br>

SOLUTION : ( ACCEPTED ) 
> time complexity : O(N) <br>
> space : O(1) <br>
```
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int height[], int n){
        if(n<=2) 
        return 0;
        
        // 2 pointer approach 
        int maxLeft = height[0];
        int maxRight = height[n-1];
        
        // using left right cause there is no for loop just to traverse we need 
        int left = 1;
        int right = n-2;
        
        int trapped =0;  // counter to return in the end;
        
        while(left<=right){
            if(maxLeft<maxRight){ // traverse from left to right
                if(height[left]>=maxLeft){ // if current tower is greater than max left
                    maxLeft = height[left];
                }else{
                    trapped += maxLeft - height[left];
                }
                left++;
            }else{ // right to left
                if(height[right]>maxRight){  // if current tower is greater than max left
                    maxRight = height[right];
                }else{
                    trapped += maxRight - height[right];
                }
                right--;
            }
        }
    return trapped;
    }
};
```
