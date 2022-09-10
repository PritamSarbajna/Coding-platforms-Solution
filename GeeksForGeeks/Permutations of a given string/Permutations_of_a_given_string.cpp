class Solution
{
    private:
        void solve(string S, vector<string>& ans, int index){
            // Base case
            if(index >= S.size()){
                ans.push_back(S);
                return;
            }
            
            for(int i=index; i<S.size(); i++){
                // Recurison
                swap(S[i], S[index]);
                solve(S, ans, index+1);
                
                // Backtracking
                swap(S[i], S[index]);
            }
        }
	public:
		vector<string> find_permutation(string S)
		{
		    int index = 0;
		    vector<string> ans;
		    solve(S, ans, index);
		    
		    // Make sure no duplicates are there
		    set<string> s;
            for(int i=0;i<ans.size();i++){
                s.insert(ans[i]);
            }          
            ans.clear();
            for(auto x:s){
                ans.push_back(x);
            }
            s.clear();
            return ans;
		}
};
