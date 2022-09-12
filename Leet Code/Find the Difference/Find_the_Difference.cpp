class Solution {
public:
    char findTheDifference(string s, string t) {
        if(t.length() == 1){
            return t[0];
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i<s.size(); i++){
            if(t[i] != s[i]){
                return t[i];
            }
        }
        return t[t.size()-1];
    }
};
