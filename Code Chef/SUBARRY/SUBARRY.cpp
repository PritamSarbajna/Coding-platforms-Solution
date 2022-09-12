#include <bits/stdc++.h>
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
	    
	    ll minimum = 1e18;
	    ll maximum = -1e18;
	    
	    ll n;
	    cin >> n;
	    vll array;
	    for(ll i=0; i<n; i++){
	        ll e;
	        cin >> e;
	        
	        // Storing maximum value
	        if((e*e) > maximum){
	            maximum = e*e;
	        }
	        
	        // Storing minimum value
	        if((e*e) < minimum){
	            minimum = e*e;
	        }
	        
	        array.push_back(e);
	    }
	    
	    // Checking if any minimum value exists than the current minimum
	    sort(array.begin(), array.end());
	    if(array[0] < 0 && array[n-1] > 0){
	        minimum = array[0] * array[n-1];
	    }
	    
	    cout << minimum << " " << maximum << endl;
	}
	return 0;
}
