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
        int x, y;
        cin >> x >> y;
        
        if(x > y){
            cout << "NEW PHONE" << endl;
        }
        else if(x == y){
            cout << "ANY" << endl;
        }
        else {
            cout << "REPAIR" << endl;
        }
    }
}
