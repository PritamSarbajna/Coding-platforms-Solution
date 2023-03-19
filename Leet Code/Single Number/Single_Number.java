class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;

        for(Integer x : nums){
            ans ^= x;
        }
        return ans;
    }
}
