class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(auto x:nums){
            if(mp.find(x) == mp.end()){
                mp[x]++;
            }
            else{
                ans.push_back(x);
            }
        }
        return ans;
    }
};
