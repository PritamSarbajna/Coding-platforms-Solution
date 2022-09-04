#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
 
    while(t--){
 
        for(int i=1; i<n; i++){
            if(s[i-1] == 'B' && s[i] == 'G'){
                swap(s[i-1], s[i]);
                i++;
            }
        }
    }
    
    cout << s << endl;
}
