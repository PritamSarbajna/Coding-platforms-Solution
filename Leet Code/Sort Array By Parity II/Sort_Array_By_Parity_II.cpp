class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        vector<int> e,o;
        
        for(auto i:nums){
            if(i%2==0)
                e.push_back(i);
            else 
                o.push_back(i);
        }
        
        int x=0,y=0;
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                nums[i]=e[y++];
            else
                nums[i]=o[x++];
        }
        
        return nums;
    }
};
