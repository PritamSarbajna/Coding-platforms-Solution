#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int secondMaxDigit[3];
	    for(int i=0; i<3; i++){
			cin >> secondMaxDigit[i];
		}
		sort(secondMaxDigit, secondMaxDigit + 3);
		cout << secondMaxDigit[1];
	}
	return 0;
}
