#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    
	    int real_n;
	    int real_m;
	    
	    if(n%2 == 0){
	        real_n = n/2;
	    }
	    else{
	        real_n = (n+1)/2;
	    }
	    if(m%2 == 0){
	        real_m = m/2;
	    }
	    else{
	        real_m = (m+1)/2;
	    }
	    
	    cout << real_n*real_m << endl;
	}
	return 0;
}
