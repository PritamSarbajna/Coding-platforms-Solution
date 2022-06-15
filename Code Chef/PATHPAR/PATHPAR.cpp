#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--){
	    ll num, x, y, i, k;
	    ll count = 0;
	    
	    cin >> num >> k;
	    if(num%2 == 0){
	        cout << "YES" << endl;
	    }
	    else{
	        if(k == 1){
	            cout << "YES" << endl;
	        }
	        else{
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}
