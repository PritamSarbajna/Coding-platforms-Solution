#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>


int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       
       unordered_map<ll, ll> m;
       vll arr;
       for(int i=0; i<n; i++){
           ll e;
           cin >> e;
           arr.push_back(e);
           m[e]++;
       }
       
       ll ans = 0;
       for(auto x:m){
            if(x.second > 1){
               ans += (x.second * (x.second-1))/2;
            }
       }
       cout << ans << endl;
    }
}
