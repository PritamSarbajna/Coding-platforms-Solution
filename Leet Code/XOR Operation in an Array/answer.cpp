class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start + 2 * 0;
        for(int i=1; i<n; i++){
            ans = ans xor (start + 2 * i);
        }
        return ans;
    }
};
