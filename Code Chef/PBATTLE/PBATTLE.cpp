#include <bits/stdc++.h>
using namespace std;

// For ordered set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define endl "\n"
#define pb push_back
#define mii map<int, int>



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
	int t;
	cin >> t;
	while(t--){
	  int n;
	  cin >> n;
	  vector<array<int, 2>> a(n);
	  
	  for(int i=0; i<n; i++){
	      cin >> a[i][0];
	  }
	  for(int i=0; i<n; i++){
	      cin >> a[i][1];
	  }
	  
	  sort(a.begin(), a.end());
	  
	  int max_power = -1;
	  ordered_set<int> set;
	  mii mp;
	  
	  for(int i = n-1; i>=0; i--){
	      int curr_power = i + set.order_of_key(a[i][1]);
	      max_power = max(curr_power, max_power);
	      mp[curr_power]++;
	      set.insert(a[i][1]);
	  }
	  
	  cout << mp[max_power] << endl;
	}
	return 0;
}
