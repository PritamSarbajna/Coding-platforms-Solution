#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n,m;
        vi arr1;
        unordered_map<int, int> mp;
        
        cin >> n;
        for(int i=0; i<n; i++){
            int e;
            cin >> e;
            mp[e] = 0;
            arr1.push_back(e);
        }

        cin >> m;
        for(int i=0; i<m; i++){
            int e;
            cin >> e;
            mp[e] = true;
        }
        
        for(int i=0; i<n; i++){
            if(mp[arr1[i]] == false){
                cout << arr1[i] << " ";
            }
        }
        cout << endl;
    }
}
