class Solution {
public:
    string makeGood(string s) 
    {
        int l=s.size();
        if(l == 1)
            return(s);
        for(int i=0;i<s.size();i++)
        {
            if(abs(s[i] - s[i+1]) == 32)
            {
                s.erase(i, 2);
                i-=2;
                if(i<-1)
                    i=-1;
            }
        }
        return s;
    }
};
