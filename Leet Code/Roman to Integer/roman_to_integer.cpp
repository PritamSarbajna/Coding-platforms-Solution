class Solution {
public:
    int getValue(char x){
        if(x == 'I'){
            return 1;
        }
        if(x == 'V'){
            return 5;
        }
        if(x == 'X'){
            return 10;
        }
        if(x == 'L'){
            return 50;
        }
        if(x == 'C'){
            return 100;
        } 
        if(x == 'D'){
            return 500;
        }
        if(x == 'M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            if (getValue(s[i])>=getValue(s[i+1]))
                sum += getValue(s[i]);       
            else
                sum -= getValue(s[i]);
        }
        return sum;
    }
};
