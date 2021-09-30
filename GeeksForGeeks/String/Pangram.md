class Solution
{
    public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str)
    {
        int pan[26] = {0};
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                pan[str[i]-'a']++;
            }else if(str[i]>='A' && str[i] <= 'Z'){
                pan[str[i]-'A']++;
            }
        }
        
        for(int i=0; i<26; i++){
            if(pan[i] == 0){ 
                return false;
            }
        }
        return true;
    }
};