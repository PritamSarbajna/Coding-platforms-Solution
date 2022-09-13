class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> set(nums.begin(), nums.end());
        
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(set.find(nums[i]-diff) != set.end() && set.find(nums[i]-2*diff) != set.end()){
                count++;
            }
        }
        return count;
    }
};
