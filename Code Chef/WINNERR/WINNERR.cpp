#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int p1, p2, q1, q2;
	    cin >> p1 >> p2 >> q1 >> q2;
	    int max1 = max(p1, p2);
	    int max2 = max(q1, q2);
	    
	    if(max1>max2){
	        cout << 'Q' << endl;
	    }
	    else if(max1==max2){
	        cout << "TIE" << endl;
	    }
	    else{
	        cout << 'P' << endl;
	    }
	}
	return 0;
}
