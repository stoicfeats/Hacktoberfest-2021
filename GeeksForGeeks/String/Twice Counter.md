class Solution
{
    public:
        int countWords(string list[], int n)
        {
           unordered_map<string,int> kit_kat;
           for(int i=0; i<n; i++){
               kit_kat[list[i]]++;
           }
           int count = 0;
           for(auto it: kit_kat)
           {
               if(it.second == 2)
               {
                   count++;
               }
        
           }
           return count;
        }
};