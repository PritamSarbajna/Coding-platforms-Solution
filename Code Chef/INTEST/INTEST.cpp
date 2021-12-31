#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k;
    cin >> t >> k;

    int count = 0;

    while(t--){
        int n;
        cin >> n;

        if(n%k == 0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
