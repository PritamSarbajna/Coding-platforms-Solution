#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		while(n){
			cnt += (n&1);
			n >>= 1;
		}
		cout << cnt << "\n";
	}
}
