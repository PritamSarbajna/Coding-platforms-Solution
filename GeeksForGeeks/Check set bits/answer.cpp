class Solution{
public:
    int isBitSet(int n){
        int count = log2(n) + 1;
        while(n){
            count -= (n&1);
            n = n >> 1;
        }
        
        return count==0;
    }
};
