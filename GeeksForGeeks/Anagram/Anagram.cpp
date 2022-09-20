class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size() != b.size()){
            return false;
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
        
    }

};
