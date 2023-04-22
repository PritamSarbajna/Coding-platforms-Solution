#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	int res = 0;

	for(int i=0; i<s.length(); i++){
		if(s[i] == 'z'){
			res += 2;
		}
		else{
			res--;
		}
	}
	cout << ((res)? "No" : "Yes") << "\n";
}
