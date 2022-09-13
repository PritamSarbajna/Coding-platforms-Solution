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
    
	ll m, n;
	cin >> n >> m;
	
	ll newN = n - (m - 1);
	ll newM = n / m;
	
	ll by = n/m, mod = n%m;
	cout << ((by*(by-1)*m)/2) + (by*mod) << " " << (newN*(newN-1))/2 << endl;
	
	
	return 0;
}
