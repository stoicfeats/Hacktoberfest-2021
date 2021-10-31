### Question Link : https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

### Video Solution : https://youtu.be/Dp4Gl8ezPZY <br>

SOLUTION : ( ACCEPTED )

```
class Solution
{
    public:
    bool isAnagram(string a, string b){

        int hash[26] = {0};
        if(a.size()!=b.size()) return 0;
        
        for(int i=0; i<a.size(); i++){
            hash[a[i]-'a']++;
        }
        
        for(auto y: b){
            hash[y-'a']--;
        }
        
        for(int i=0; i<26; i++){
            if(hash[i]>0)
                return 0;
        }
        
        return 1;
        
    }
};
```