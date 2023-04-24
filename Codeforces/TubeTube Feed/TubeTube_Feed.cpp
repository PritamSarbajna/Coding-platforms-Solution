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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;
    while(q--){
        int n, t; cin >> n >> t;

        int arr[n][2];

        for(int i = 0; i < n; i++){
            cin >> arr[i][0];
        }
        for(int i = 0; i < n; i++){
            cin >> arr[i][1];
        }

        int res = -1;
        int max_sum = INT_MIN;

        for(int i = 0; i < n; i++){
            if(arr[i][0] <= t){
                if(arr[i][1] > max_sum){
                    max_sum = arr[i][1];
                    res = i+1;
                }
            }
            t--;
        }

        cout << res << endl;
    }

    return 0;
}
