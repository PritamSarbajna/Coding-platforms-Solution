class Solution {
public:
    string defangIPaddr(string address) {
        vector<char> ans;

        for(auto x:address){
            if(x == '.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else{
                ans.push_back(x);
            }
        }
        string ans_s(ans.begin(), ans.end());
        return ans_s;
    }
};
