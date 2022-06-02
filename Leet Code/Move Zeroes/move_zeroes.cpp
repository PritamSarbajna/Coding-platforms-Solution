// // Brute force solution
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++){            
//             if (nums[i] != 0){
//                 continue;
//             } 
//             else {
//                 for (int j = i + 1; j < nums.size(); j++){
//                     if (nums[j] != 0){
//                         std::swap(nums[i], nums[j]);
//                         break;
//                     }
//                     else
//                         continue;
//                 }
//             }
//         }
//     }
// };

// Two pointer solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while(j<n){
            if(nums[j]==0) j++;
            else{
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};
