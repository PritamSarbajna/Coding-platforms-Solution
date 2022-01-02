class Solution {
public:
    int reverse(int x) {
        int reverse = 0;

        while(x!=0){
            
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0;
            }
            int n = x % 10;
            reverse = reverse * 10 + n;
            x /= 10;
        }
        return reverse;
    }
};
