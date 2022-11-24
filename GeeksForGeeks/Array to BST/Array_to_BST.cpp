class Solution {
    
public:
    void solve(vector<int>& nums, vector<int>& ans, int start,int end){
        if(start > end){
            return;
        }
        int mid = (start + end) / 2;
        ans.push_back(nums[mid]);
        
        solve(nums, ans , start, mid-1);
        solve(nums, ans, mid+1, end);
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        
        solve(nums, ans, 0 , nums.size()-1);
        
        return ans;
    }
};
