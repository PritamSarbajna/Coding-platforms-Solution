#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string one, two;
    cin >> one >> two;
    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);
    
    if(one == two){
        cout << 0 << endl;
    }
    else if(lexicographical_compare(one.begin(), one.end(), two.begin(), two.end())){
        cout << -1 << endl;
    }
    else{
        cout << 1 << endl;
    }
    return 0;
}
