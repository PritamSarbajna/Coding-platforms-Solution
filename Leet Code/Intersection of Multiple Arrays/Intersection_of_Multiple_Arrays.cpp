class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        
        if(nums.size() == 1){
            sort(nums[0].begin(), nums[0].end());
            return nums[0];
        }
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                if(i != nums.size()-1){
                    mp[nums[i][j]]++;
                }
                else{
                    if(mp[nums[i][j]] > nums.size()-2){
                        ans.push_back(nums[i][j]);
                    }
                }
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
