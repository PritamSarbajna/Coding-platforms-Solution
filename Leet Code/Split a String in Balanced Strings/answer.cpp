class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, R = 0, L = 0;
        for(auto x:s){
            if(x == 'R'){
                R++;
            }
            else if(x == 'L'){
                L++;
            }

            if(R == L){
                R = L = 0;
                count++;
            }
        }
        return count;
    }
};
