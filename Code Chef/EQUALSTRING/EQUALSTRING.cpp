#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, count = 0;
	    cin >> n;
	    string s_1, s_2, s_3= " ";
	    cin >> s_1 >> s_2;
	    for(long long i=0; i<n; i++){
	        if(s_1[i] == s_2[i]){
	            continue;
	        }
	        else{
	            s_3 += s_2[i];
	        }
	    }
	    
	    sort(s_3.begin(), s_3.end());
	    
	    n = s_3.size()-1;
	    for(int j=0; j<n; j++){
	        if(s_3[j] != s_3[j+1]){
	            count++;
	        }
	    }
	    cout << count << endl;
	    
	}
	return 0;
}
