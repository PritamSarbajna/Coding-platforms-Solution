#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a>b && a>c && a>50){
            cout << "A\n";
        }
        else if(b>a && b>c && b>50){
            cout << "B\n";
        }
        else if (c>a && c>b && c>50){
            cout << "C\n";
        }
        else{
            cout << "NOTA\n";
        }
    }
    return 0;
}
