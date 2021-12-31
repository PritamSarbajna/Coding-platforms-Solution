class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int s = nums.size();
        
        for(int i=0; i<s; i++){
            nums.push_back(nums[i]);
        }
        
        return nums;
    }
};
