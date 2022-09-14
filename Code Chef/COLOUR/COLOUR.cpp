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
        int a, b, c;
        cin >> a >> b >> c;
        
        // return them as unique color
        if((a == 0 || a==1) && (b == 0 || b==1) && (c == 0 || c==1)){
            cout << a+b+c << endl;
            continue;
        }
        
        vi v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        
        sort(v.begin(), v.end(), greater<int>());
        
        ll ans = 0;
        
        for(int i=0; i<3; i++){
            if(v[i]){
                ans++;
            }
        }
        
        if(v[2] == 2){
            (v[0]>=3)? cout << ans+2 << endl : cout << ans+1 << endl;
        }
        else if(v[2] >= 3){
            cout << ans+3 << endl;
        }
        else
            (v[1]<=1)? cout << ans << endl : cout << ans+1 << endl;

    }
}
