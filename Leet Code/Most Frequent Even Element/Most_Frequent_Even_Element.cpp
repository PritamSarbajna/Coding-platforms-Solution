class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }
        
        int key = -1, frequency = 0;
        for(auto x:mp){
            if(x.second > frequency){
                key = x.first;
                frequency = x.second;
            }
        }
        return key;
    }
};
