class Solution {
public:
    int value(char num){
        if(num == '0'){
            return 1;
        }
        return int(num) - 48;
    }

    int minPartitions(string n) {
        int ans = 0;

        for(int i=0; i<n.length(); i++){
            
            int val = value(n[i]) - ans;
            (val < 0)? ans += 0 : ans += val;
        }

        return ans;
    }
};

// Approach 2

class Solution {
public:
    int minPartitions(string n) {
        int maxx = INT_MIN;

        for(auto x:n){
            maxx = max(x-'0',maxx);
        }

        return maxx;
    }
};
