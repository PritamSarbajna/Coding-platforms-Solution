#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> p;
    int t, k;
    cin >> t >> k;

    int count = 0;

    for (int i = 0; i < t; i++){
        int element;
        cin >> element;
        p.push_back(element);
    }

    for (int i = 0; i < p.size(); i++){
        if (p[i] >= p[k] && p[i] > 0){
            count++;
        }
    }

    cout << count;

    return 0;
}
