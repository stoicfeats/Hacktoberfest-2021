### Question Link : https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#

### Solution Video : https://www.youtube.com/watch?v=liC67an_azg

**If you are here for the leetcode vs gfg confusion then here is the explanation :**

**1. Leetcode Submitted Code :**

```
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int dpmax = nums[0];
        int dpmin = nums[0];
        int omax = nums[0];
        for(int i=1; i<nums.size();i++){
            int res = max({nums[i],dpmax*nums[i],dpmin*nums[i]});
            dpmin = min({nums[i],dpmax*nums[i],dpmin*nums[i]});
            dpmax = res;
            omax = max(omax,dpmax);
        }
        return omax;
        
    }
};
```
and here is it's explanation : https://www.youtube.com/watch?v=liC67an_azg

**2. Changes for gfg code :** 

1. long long plays an important role
2. except the loop, wherever you are storing a value should be a long long now, why ? 
3. if the answer is 404928287208900000 but our code is showing 449942298618103232 because when we multiply 404928287208900000 * (-90) it gives 449942298618103232 (which is not a negative value)

### GFG SOLUTION : (ACCEPTED)

```
class Solution{
public:
	long long maxProduct(vector<int> nums, int n) {
	    long long dpmax = nums[0];
        long long dpmin = nums[0];
        long long omax = nums[0];
        for(int i=1; i<nums.size();i++){
            long long res = max({(long long)nums[i],dpmax*nums[i],dpmin*nums[i]});
            dpmin = min({(long long)nums[i],dpmax*nums[i],dpmin*nums[i]});
            dpmax = res;
            omax = max(omax,dpmax);
        }
        return omax;
	}
};
```