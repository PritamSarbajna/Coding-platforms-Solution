#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long int x, y;
	    cin >> x >> y;
	    if(y >= x){
	        cout << 0 << endl;
	    }
	    else if(y==0){
	        cout << x << endl;
	    }
	    else{
	        cout << x-y << endl;
	    }
	}
	return 0;
}
