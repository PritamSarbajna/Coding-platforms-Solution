class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size(); // Size of the array
        int subset_cnt = (1<<n); // Subset count: 2^n

        // To take all the the subsets
        for(int i=0; i<subset_cnt; i++){
            vector<int> subset;
            // Let's go to every bit and check the bit is set or not
            for(int j=0; j<n; j++){
                if((i & (1<<j)) != 0){
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};
