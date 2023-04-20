class Solution {
public:
    int minBitFlips(int start, int goal) {
        int temp = start xor goal;
        int ans = 0;

        while(temp){
            ans += temp & 1;
            temp = temp >> 1;
        }

        return ans;
    }
};
