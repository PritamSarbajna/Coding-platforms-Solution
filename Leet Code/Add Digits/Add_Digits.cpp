class Solution {
    int sum(int num){
        int sum = 0;
        while(num>0){
            int n = num%10;
            sum += n;
            num /= 10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        while(num>9){
            num = sum(num);
        }
        return num;
    }
};
