#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int num;
		cin >> num;

		int revnum = 0;

		while (num != 0){
			revnum = revnum * 10 + num % 10;
			num /= 10;
		}
		cout << revnum << endl;
	}
	return 0;
}
