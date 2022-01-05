#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int start, remain;
	    cin >> start >> remain;
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if((start-remain) >= (a+b+c)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
