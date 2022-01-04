#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;

        if(num%10 == 0){
            cout << 0 << endl;
        }
        else if(num%5 == 0){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}
