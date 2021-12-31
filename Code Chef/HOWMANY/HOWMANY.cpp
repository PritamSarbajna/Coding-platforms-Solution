#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size() == 1){
        cout << "1" << endl;
    }
    else if (s.size() == 2){
        cout << "2" << endl;
    }
    else if (s.size() == 3){
        cout << "3" << endl;
    }
    else{
        cout << "More than 3 digits" << endl;
    }

    return 0;
}
