class Solution {
public:
    string removeDigit(string number, char digit) {
        string max_num = "0";
        for(int i=0; i<number.length(); i++){
            if(number[i] == digit){
                string temp = number.substr(0, i) + number.substr(i+1);
                max_num = max(max_num, temp);
            }
        }
        
        return max_num;
    }
};
