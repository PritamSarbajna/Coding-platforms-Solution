class Solution {
public:
    int mySqrt(int x) {
        if(x<=1){
            return x;
        }
        
        return floor(sqrt(x));
    }
};
