class Solution{
    public:
    //Complete this function
    
    void solve(string str, vector<string>& ans, int index){
        // Base case
        if(index >= str.size()){
            ans.push_back(str);
            return;
        }
        
        for(int i=index; i<str.size(); i++){
            swap(str[i], str[index]);
            solve(str, ans, index+1);
            swap(str[i], str[index]);
        }
    }
    
    vector<string> permutation(string S)
    {
        int index = 0; 
        vector<string> ans;
        solve(S, ans, index);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
