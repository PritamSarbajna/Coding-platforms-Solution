#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    int count = 0;
	    if(n <= 6){
	        cout << x << endl;
	    }
	    else{
	        count = n/6;
	        if(count*6 < n){
	            count++;
	        }
	        cout << count*x << endl;
	    }
	}
	return 0;
}
