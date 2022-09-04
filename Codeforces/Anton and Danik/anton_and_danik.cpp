#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = 0, danik = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(anton > danik){
        cout << "Anton" << endl;
    }
    else if(anton < danik){
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}
