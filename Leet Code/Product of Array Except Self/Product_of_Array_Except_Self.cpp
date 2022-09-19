class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
      
        int multiply = 1;
        for(int i=0; i<nums.size(); i++){
            multiply *= nums[i];
            ans.push_back(multiply);
        }
      
        multiply = 1;
        for(int i=nums.size()-1; i>0; i--){
            ans[i] = ans[i-1]*multiply;
            multiply *= nums[i];
        }
      
        ans[0] = multiply;
        return ans;
    }
};
