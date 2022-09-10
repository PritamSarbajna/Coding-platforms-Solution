class Solution {
private:
    void solve(vector<vector<int>> &permutation, vector<int> nums, int index){
        // Base case
        if(index >= nums.size()){
            permutation.push_back(nums);
            return;
        }
        
        for(int i=index; i<nums.size(); i++){
            // Recursion
            swap(nums[i], nums[index]);
            solve(permutation, nums, index+1);
            
            // Backtracking
            swap(nums[i], nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> permutation;
        solve(permutation, nums, index);
        return permutation;
    }
};
