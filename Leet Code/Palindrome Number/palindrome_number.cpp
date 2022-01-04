class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        int real = x;
        
        while(x!=0){
            reverse = reverse*10 + (x%10);
            x /= 10;
        }
        
        if(real == reverse && real >= 0){
            return true;
        }
        else{
            return false;
        }
    }
};
