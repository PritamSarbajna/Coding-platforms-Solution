/*


 _____      _ _                     _____            _           _            
 |  __ \    (_) |                   / ____|          | |         (_)    
 | |__) | __ _| |_ __ _ _ __ ___   | (___   __ _ _ __| |__   __ _ _ _ __   __ _
 |  ___/ '__| | __/ _` | '_ ` _ \   \___ \ / _` | '__| '_ \ / _` | | '_ \ / _` |
 | |   | |  | | || (_| | | | | | |  ____) | (_| | |  | |_) | (_| | | | | | (_| |
 |_|   |_|  |_|\__\__,_|_| |_| |_| |_____/ \__,_|_|  |_.__/ \__,_| |_| |_|\__,_|
                                                                _/ |
                                                               |__/


*/



#include <bits/stdc++.h>
using namespace std;

// For ordered set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define ar array
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define endl "\n"
#define vi vector<int>
#define pb push_back
#define mii unordered_map<int, int>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        mii mp;
        int maxx = INT_MIN;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
            maxx = max(maxx, arr[i]);
        }

        int i, mex_a;
        for(i=0; i<=maxx; i++){
            if(mp.find(i) != mp.end()){
                mp[i]--;
            }
            else{
                mex_a = i;
                break;
            }

            // Checking if all the values present 
            if(i == maxx){
                mex_a = i+1;
            }
        }
        int j, mex_b;
        for(j=0; j<=maxx; j++){
            if(mp[j] > 0){
                mp[j]--;
            }
            else{
                mex_b = j;
                break;
            }

            // Checking if all the values present 
            if(j == maxx){
                mex_b = j+1;
            }
        }
        cout << mex_a + mex_b << endl;
    }

    return 0;
}
