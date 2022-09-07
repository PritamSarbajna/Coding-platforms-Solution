#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int sumk(int k){
    int sum = 0;
    for(int i=1; i<=k; i++){
        sum += i;
    }
    return sum;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        if(n < sumk(k)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
