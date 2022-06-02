#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;

    int count = 0;

    while(!(x <= 0)){
        if(x==5 || x==4 || x==3 || x==2 || x==1){
            x -= x;
            count++;
        }
        else{
            x -= 5;
            count++;
        }
    }
    cout << count << endl;
}
