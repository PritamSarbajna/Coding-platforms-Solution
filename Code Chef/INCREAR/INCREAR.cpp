#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    long int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;

        if(x == y){
            cout << 0 << endl;
        }
        else{
            if(x<y){
                cout << y-x << endl;
            }
            else{
                if(x%2==0 && y%2==0 || x%2!=0 && y%2!=0) 
                    cout << (x-y)/2 << endl;
                else{
                    if(x%2!=0 && y%2==0 || x%2==0 && y%2!=0) 
                        cout << ((x+1-y)/2)+1 <<endl;
                }
            }
        }
    }

    return 0;
}
