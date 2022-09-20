class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int dup = 0;
        for(auto x:nums){
            dup ^= x;
        }
        return dup;
    }
};
