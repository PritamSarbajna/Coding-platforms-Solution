#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int withdraw;
    float balance;

    cin >> withdraw >> balance;

    if (withdraw % 5 == 0 && balance >= (withdraw + 0.50)){

        float current = (balance - withdraw) - 0.50;
        cout << fixed << setprecision(2) << current << endl;
    }
    else{
        cout << balance << endl;
    }
    return 0;
}
