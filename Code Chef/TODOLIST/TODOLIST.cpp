#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int q;
        cin >> q;
        
        while(q--){
            int num;
            cin >> num;
            num -= 1000;
            
            if(num >= 0){
                count++;
            }
        }
        cout << count << endl;
    }
}
