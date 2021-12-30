#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if (m > n){
        cout << m - n << endl;
    }
    else{
        cout << m + n << endl;
    }

    return 0;
}
