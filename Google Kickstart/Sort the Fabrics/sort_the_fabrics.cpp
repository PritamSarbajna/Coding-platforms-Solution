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
#define mii map<int, int>
#define vst vector<string>
#define vpsll vector<pair<string,long long>>
#define vpll vector<pair<long long, long long>>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll casee = 1;
    ll tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        vpsll ada;
        vpll charles;

        for(ll i = 0; i < n; i++){
            string str;
            ll dur, id;
            cin >> str >> dur >> id;

            pair<string,long long> ada_pair = make_pair(str, id);
            ada.pb(ada_pair);
            pair<long long,long long> charles_pair = make_pair(dur, id);
            charles.pb(charles_pair);
        }

        sort(ada.begin(), ada.end());
        sort(charles.begin(), charles.end());

        ll ans = 0;

        for(ll i=0; i<n; i++){
            if(ada[i].second == charles[i].second){
                ans++;
            }
        }

        cout << "Case #"<< casee++ << ": " << ans << endl;
    }

    return 0;
}
