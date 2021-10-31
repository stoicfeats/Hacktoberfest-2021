## Question Link : https://practice.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1#

## Video Solution : *arriving soon* 

SOLUTION : ( ACCEPTED ) 

```
class Solution {
public:
    vector<int> FindExitPoint(vector<vector<int>>&matrix){
		int dir = 0; // 0-east ,1-south ,2-west ,3-north
        int i = 0, j = 0;
        vector<int> ans;

        while (true) 
        {
            dir = (dir + matrix[i][j]) % 4;
            matrix[i][j] = 0;
            if (dir == 0) {
                j++;
            } else if (dir == 1) {
                i++;
                // matrix[i][j] = 0;
            } else if (dir == 2) {
                j--;
                // matrix[i][j] = 0;
            } else {
                i--;
                // matrix[i][j] = 0;
            }

            if (i < 0) {
                i++;
                break;
            } else if (j < 0) { 
                j++;
                break;
            } else if (i >= matrix.size()) {
                i--;
                break;
            } else if (j >= matrix[0].size()) {
                j--;
                break;
            }
        }
        ans.push_back(i);
        ans.push_back(j);
        
        return ans;
    }
};
```
