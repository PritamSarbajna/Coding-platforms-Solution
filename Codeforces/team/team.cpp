#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int count = 0;
    cin >> t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        if((x+y+z) >= 2){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
