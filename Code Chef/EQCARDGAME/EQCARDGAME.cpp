#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;

        cout << 52 - ((52/k) * k) << endl;
    }
    return 0;
}
