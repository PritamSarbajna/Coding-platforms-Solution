#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char ch;
    float d;
    double e;
    
    cin >> a >> b >> ch >> d >> e;
    
    cout << a << endl;
    cout << b << endl;
    cout << ch < endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    
    return 0;
}
