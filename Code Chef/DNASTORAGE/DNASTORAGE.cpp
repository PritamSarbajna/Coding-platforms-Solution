#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    string result = "";
	    for(int i=0; i<n; i++){
	        if(s[i] == '0'){
	            if(s[i+1] == '0'){
	                result += "A";
	                i++;
	            }
	            else{
	                result += "T";
	                i++;
	            }
	        }
	        else{
	            if(s[i+1] == '0'){
	                result += "C";
	                i++;
	            }
	            else{
	                result += "G";
	                i++;
	            }
	        }
	    }
	    cout << result << endl;
	}
	return 0;
}
