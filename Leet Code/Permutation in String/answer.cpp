class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        map<char, int> m;
        for(char c : s1) 
            m[c]++;

        int j = 0, i = 0, total_chars = s1.length();

        while(j < s2.length()){
            if(m[s2[j++]]-- > 0)
                total_chars--;
            if(total_chars == 0) 
                return true;
            if(j - i == s1.length() && m[s2[i++]]++ >= 0)
                total_chars++;
        }
        return false;
    }
};
