#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		unsigned long long p; cin >> p;
		int cnt = 0;

		while(p){
			cnt += (p&1);
			p = p >> 1;
		}

		cout << cnt << endl;
	}
}
