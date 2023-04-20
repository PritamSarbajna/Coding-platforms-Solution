class Solution {
public:
    int popcount(int i){
        int count = 0;
        while(i){
            count += i & 1;
            i = i >> 1;
        }

        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<n+1; i++){
            ans.push_back(popcount(i));
        }
        return ans;
    }
};
