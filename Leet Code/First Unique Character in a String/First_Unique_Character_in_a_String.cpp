class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for(auto w : s){
            mp[w]++;
        }
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] < 2)
                return i;
        }
        return -1;
    }
};
