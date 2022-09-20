//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        
        for(auto x:string_list){
            string temp = x;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(x);
        }
        
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
