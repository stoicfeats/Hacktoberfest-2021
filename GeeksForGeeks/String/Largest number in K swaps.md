string

class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
        
        int len = str.size();
        for(int i=0;i<len;i++){
            for(int j = i+1 ;j<len; j++){
                if(str[j]>str[i]){
                    swap(str[i],str[j]);
                }
            }
        }
    }
};

half of the solution still remains.
