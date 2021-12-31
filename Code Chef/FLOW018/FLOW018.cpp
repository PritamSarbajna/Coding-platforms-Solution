#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main(){
    int t;
    cin >> t;

    while (t--){
        int num;
        cin >> num;
        cpp_int result = 1;

        for (int i = 1; i <= num; ++i){
            result *= i;
        }
        cout << result << endl;
    }
    return 0;
}
