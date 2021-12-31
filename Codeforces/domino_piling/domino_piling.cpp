#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    int domino;

    if(m%2==0){
        int k = m / 2;
        domino = k * n;
    }

    domino = (m * n) / 2;
    
    cout << domino << endl;

    return 0;
}
