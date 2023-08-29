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

const int SIZE = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int freq[SIZE+1];
    ll n; cin >> n;
    vector<ll> shop;

    for(int i=0; i<n; i++){
        ll e; cin >> e;
        shop.pb(e);
        freq[e]++; // Counting frequency
    }

    ll sum = 0;
    int prefix[SIZE+1];
    
    for(int i=0; i<=SIZE; i++){
        sum += freq[i];
        prefix[i] = sum;
    }

    ll q; cin >> q;

    for(int i=0; i<q; i++){
        ll e; cin >> e;
        if(e > SIZE) 
            cout << n << endl;
        else
            cout << prefix[e] << endl;
    }


    return 0;
}
