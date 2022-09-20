class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;
        
        for(auto x:nums){
            currSum += x;
            
            maxSum = max(maxSum, currSum);
            
            if(currSum < 0)
                currSum = 0;
        }
        
        return maxSum;
    }
};
