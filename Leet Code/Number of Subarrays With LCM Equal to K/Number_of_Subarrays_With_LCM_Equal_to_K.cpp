class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            int lcm = nums[i];
            
            if(lcm == k) ans++;
            
            for(int j=i+1; j<nums.size(); j++){
                int gcd = __gcd(lcm, nums[j]);
                lcm = (lcm*nums[j])/gcd;
                
                if(lcm > k) break;
                if(lcm == k) ans++;
            }
        }
        return ans;
    }
};
