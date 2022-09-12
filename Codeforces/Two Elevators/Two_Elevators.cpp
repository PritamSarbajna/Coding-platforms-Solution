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
        int a, b, c;
        cin >> a >> b >> c;

        int second = abs(b - c) + c;

        if(a == second){
            cout << 3 << endl;
        }
        else if(a < second){
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}
