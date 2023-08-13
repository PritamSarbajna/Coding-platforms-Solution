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

    int n; cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        v.pb(str);
    }

    if(n == 1){
        cout << v[0] << endl;
        return 0;
    }

    set<string> strset(v.begin(), v.end());

    string a, b;
    int i = 0;
    for(auto str : strset){
        if(i == 0){
            a = str;
        }
        else{
            b = str;
        }
        i++;
    }

    int a_c = 0, b_c = 0;
    for(auto str : v){
        if(str == a){
            a_c++;
        }
        else{
            b_c++;
        }
    }

    cout << ((a_c > b_c)? a : b) << endl;

    return 0;
}
