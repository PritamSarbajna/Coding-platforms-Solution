class Solution {
    public void moveZeroes(int[] nums) {
        int low = 0, high = 0;

        while(high < nums.length){
            if(nums[high] == 0){
                high++;
            }
            else{
                int temp = nums[low];
                nums[low] = nums[high];
                nums[high] = temp;
                low++; high++;
            }
        }
    }
}
