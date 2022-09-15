class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2){
        if(str1.size() != str2.size())
            return false;
        
        unordered_map<char,int> m, p;
        for(int i=0; i<str1.size(); i++){
            if(m[str1[i]] && m[str1[i]] != str2[i]){
                return false;
            }
            if(p[str2[i]] && p[str2[i]] != str1[i]){
                return false;
            }
            m[str1[i]] = str2[i];
            p[str2[i]] = str1[i];
        }
        return true;
        
    }
};
