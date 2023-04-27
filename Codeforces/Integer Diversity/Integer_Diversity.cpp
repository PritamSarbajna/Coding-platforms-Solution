#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;

        unordered_map<int, int> mp;
        int count = 0;

        for(int i = 0; i < n; i++){
            int e;
            cin >> e;
            v.push_back(e);

            mp[abs(e)]++;
        }

        for(auto x:mp){
            if(x.first == 0){
                count++;
                continue;
            }
            if(x.second > 1){
                count += 2;
            }
            else{
                count++;
            }
        }

        cout << count << endl;
    }
}
