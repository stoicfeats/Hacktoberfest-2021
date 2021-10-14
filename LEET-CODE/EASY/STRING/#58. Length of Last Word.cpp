class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int final_count=0;
        char temp=' ';
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==temp)
            {
                if(count>0)
                {
                    final_count=count;
                }
                count=0;
            }
            else
            {
                count++;
            }
            
                
        }
        if(count>0)
                {
                    final_count=count;
                }
        return final_count;
    }
};