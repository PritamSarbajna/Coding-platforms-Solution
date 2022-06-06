#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int contest_time = 4*60; // Total 4hr contest time in minutes
    contest_time -= k; // remaining time
 
    if(contest_time <= 0){
        cout << 0 << endl;
    }
    else{
        int i = 1;
        while(contest_time > 0){
            if(contest_time < (i*5) || i > n){
                break;
            }
            contest_time -= (i*5);
            i++;
        }
        cout << i-1 << endl;
    }
}
