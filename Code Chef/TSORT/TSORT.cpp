#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;

    while(t--){
        int e;
        cin >> e;
        v.push_back(e);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
    
}
