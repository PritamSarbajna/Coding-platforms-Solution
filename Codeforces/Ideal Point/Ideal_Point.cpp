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
#define vpii vector<pair<int, int>>
#define vll vector<long long>
#define endl "\n"
#define vi vector<int>
#define pb push_back
#define mii map<int, int>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        // Taking inputs and counting k's segment count
        int n, k; cin >> n >> k;
        int left = 0, right = 0, center = 0; 

        while(n--){
            int l, u; cin >> l >> u;

            if(l == u && l == k){
                center++;
            }
            else if(u == k){
                right++;
            }
            else if(l == k){
                left++;
            }
        }

        if(center > 0){
            cout << "YES" << endl;
        }
        else if(left > 0 && right > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
