#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    
	    if(n%m == 0){
	        if((n/m)%2 == 0){
	            cout << "Yes" << endl;
	        }
	        else{
	            cout << "No" << endl;
	        }
	    }
	    else{
	            cout << "No" << endl;
	    }
	}
}
