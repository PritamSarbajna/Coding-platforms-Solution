#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int v = 0;
        for(int i=1; i<=n; i++){
            if(i==1 || i== n){
                cout << "3";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
        
    }
	
	return 0;
}
