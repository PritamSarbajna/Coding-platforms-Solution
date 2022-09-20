// User function Template for C++
class Solution {
  public:
    long long int bitsAreInAltOrder(long long int n){
        long long int prev_bit = n&1;
        n >>= 1;
        
        while(n){
            long long int curr_bit = n&1;
            
            if(prev_bit == curr_bit){
                return 0;
            }
            
            prev_bit = curr_bit;
            n >>= 1;
        }
        return 1;
    }
};
