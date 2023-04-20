class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int prev = first;
        for(int i=0; i<encoded.size(); i++){
            prev = prev xor encoded[i];
            ans.push_back(prev);
        }

        return ans;
    }
};
