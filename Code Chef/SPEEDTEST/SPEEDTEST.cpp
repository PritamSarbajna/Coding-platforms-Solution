#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>


int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        double a, x, b, y;
        cin >> a >> x >> b >> y;
        
        double aliceSpeed = a/x;
        double bobSpeed = b/y;
        
        if(aliceSpeed < bobSpeed){
            cout << "BOB" << endl;
        }
        else if(aliceSpeed == bobSpeed){
            cout << "EQUAL" << endl;
        }
        else{
            cout << "ALICE" << endl;
        }
    }
}
