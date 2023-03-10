class Solution {
    public int[] sortedSquares(int[] nums) {

        int[] ans = new int[nums.length];

        int low = 0, high = nums.length-1;
        for(int i=nums.length-1; i>=0; i--){
            if(Math.abs(nums[high]) > Math.abs(nums[low])){
                ans[i] = nums[high] * nums[high];
                high--;
            }
            else{
                ans[i] = nums[low] * nums[low];
                low++;
            }
        }
        return ans;
    }
}
