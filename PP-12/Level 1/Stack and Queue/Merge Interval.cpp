### Question Link : https://leetcode.com/problems/merge-intervals/

### Solution Video : https://www.youtube.com/watch?v=2JzRBPFYbKE

SOLUTION : (ACCEPTED)

```
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> kit_kat;
        if(intervals.size()==0) return kit_kat;
        sort(intervals.begin(),intervals.end());
        vector<int> waffer = intervals[0];
    
        
        for(auto it:intervals){
            if(it[0]<=waffer[1]){
                waffer[1] = max(waffer[1],it[1]);
            }else{
                kit_kat.push_back(waffer);
                waffer = it;
            }
        }
        kit_kat.push_back(waffer);
        return kit_kat;
    }
};
```