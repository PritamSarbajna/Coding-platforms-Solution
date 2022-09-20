class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last_bit = n&1;
        n = n >> 1;
        
        while(n){
            int curr_bit = n&1;
            n = n >> 1;
            
            if(curr_bit == last_bit)
                return false;
            
            last_bit = curr_bit;
        }
        
        return true;
        
    }
};
