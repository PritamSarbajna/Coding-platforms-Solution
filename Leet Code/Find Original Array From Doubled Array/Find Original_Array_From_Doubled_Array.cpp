class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        if(changed.size()%2)
            return ans;
        
        map<int, int> mp;
        for(auto x:changed){
            mp[x]++;
        }
        sort(changed.begin(), changed.end());
        for(auto x:changed){
            if(mp[x] == 0){
                continue;
            }
            else if(mp[x*2] == 0){
                return {};
            }
            else {
                ans.push_back(x);
                mp[x*2]--;
                mp[x]--;
            }
        }
        return ans;
    }
};
