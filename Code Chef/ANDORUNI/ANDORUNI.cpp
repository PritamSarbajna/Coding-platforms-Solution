#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;

        int a[n], s[32] = {0};

        for (int i = 0; i < n; i++){
            cin >> a[i];
            for (int j = 0; j < 32; j++){
                k = a[i] >> j;

                if (k & 1)
                    s[j]++;
            }
        }

        ll int ans = 0;

        for (int i = 0; i < 32; i++)
        {

            if (s[i] > 1)
                ans += pow(2, i);
        }

        cout << ans << endl;
    }

    return 0;
}
