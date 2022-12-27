class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        
        for(int i=0; i<words.size(); i++){
            if(words[i] == target){
                int diff = words.size()-abs(startIndex-i);
                ans = min(ans, min(abs(startIndex-i), diff));
            }
        }
        
        return (ans>100)? -1 : ans;
    }
};
