class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, left = 0, right = 0;
        map<char, int> mp;

        while(right<s.length()){
            if(mp.find(s[right]) != mp.end()){
                left = max(mp[s[right]] +1, left);
            }

            mp[s[right]] = right;

            ans = max(ans, right-left+1);
            right++;
        }

        return ans;
    }
};
