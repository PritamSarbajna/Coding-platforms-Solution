class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        int flag = 1;
        
        for(int i=0; i<n; i++){
            if(isspace(sentence[i]) && sentence[i-1] != sentence[i+1]){
                flag = 0;
            }
        }
        
        return !((flag && sentence[0] != sentence[n-1]) || flag == 0);
    }
};
