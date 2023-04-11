class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        map<ll, ll> mp;
        
        for(int i=0; i<A.size(); i++){
            mp[A[i]]++;
        }
        
        for(int i=0; i<B.size(); i++){
            mp[B[i]]--;
        }
        
        for(auto x:mp){
            if(x.second){
                return false;
            }
        }
        return true;
    }
};
