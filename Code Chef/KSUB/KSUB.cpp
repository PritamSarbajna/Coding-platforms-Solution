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
#define pb push_back
#define mii map<int, int>



int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vi arr;
        int G = 0;
        for(int i=0; i<n; i++){
            int e;
            cin >> e;
            arr.pb(e);
            G = __gcd(G, e);
        }
        
        int subG = 0, count = 0;
        
        for(int i=0; i<n; i++){
            subG = __gcd(subG, arr[i]);
            
            if(subG == G){
                count++;
                subG = 0;
            }
        }
        
        cout << ((count>=k)? "YES" : "NO") << endl;
    }
}
