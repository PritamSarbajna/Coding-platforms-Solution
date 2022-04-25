#include <bits/stdc++.h>

using namespace std;

int main() {
  
	int n;
	cin >> n;    //Reading input from STDIN

	for(int i=0; i<n; i++){
		cout << "*";
	}
	cout << endl;

	// To print middle lines
	int line = n-2;
	int pos = n-1;
	
	while(line--){
		for(int i=1; i<=pos; i++){
			
			if(i == pos){
				cout << "*" << endl;
			}
			else{
				cout << " ";
			}
		}
		pos--;
	}
  
  // To print last lines
	for(int i=0; i<n; i++){
		cout << "*";
	}

	return 0;

}
