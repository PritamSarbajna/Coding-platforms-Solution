#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int num;
        cin >> num;

        int first;
        int last = num % 10;

        int temp = num;
        int count = 0;

        while (temp /= 10){
            count++;
        }
        first = num / pow(10, count);

        cout << first + last << endl;
    }

    return 0;
}
