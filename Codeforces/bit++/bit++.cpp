#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    int x = 0;

    while(t--){
        string s;
        cin >> s;

        if(s[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;

    return 0;
}
