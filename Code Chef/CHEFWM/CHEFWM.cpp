#include <bits/stdc++.h>

using namespace std;

int main(){
    int t_c = 0, t_t = 1;
    cin >> t_t;
    while (t_t > t_c++)
    {
        long long n, m;
        cin >> n >> m;
        long long answer = 0, temp = m;
        for (long long i = 2; i * i <= m; i++){
            if (!(temp % i)){
                answer++;
                while (!(temp % i)){
                    temp /= i;
                }
            }
        }
        if (temp > 1){
            answer++;
        }
        vector<long long> array;
        for (long long i = 1; i * i <= n; i++){
            if (!(n % i)){
                array.push_back(i);
                if (i != (n / i))
                    array.push_back(n / i);
            }
        }
        long long num = 0;
        for (auto x : array)
        {
            if (x <= answer)
                num = x;
        }
        cout << num << endl;
    }
    return 0;
}
