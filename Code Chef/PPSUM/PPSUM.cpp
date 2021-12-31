#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int i, n, d, sum = 0;
        cin >> d >> n;
        for (i = 1; i <= d; i++){
            n = n * (n + 1) / 2;
        }
        cout << n << endl;
    }
    return 0;
}
