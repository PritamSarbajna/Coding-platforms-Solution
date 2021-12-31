#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string num;
        cin >> num;

        int count = 0;

        for (int i = 0; i < num.size(); i++){
            if (num[i] == '4'){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
