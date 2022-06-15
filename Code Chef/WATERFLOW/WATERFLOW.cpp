#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int yz = y * z;
        
        if(w+yz > x){
            cout << "overflow" << endl;
        }
        else if(w+yz == x){
            cout << "filled" << endl;
        }
        else{
            cout << "unfilled" << endl;
        }
    }
}
