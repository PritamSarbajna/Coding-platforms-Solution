class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num){
            v.push_back(num%10);
            num /= 10;
        }

        sort(v.begin(), v.end());

        // First number
        int a = v[0]; a = a*10 + v[2];

        // Second number
        int b = v[1]; b = b*10 + v[3];

        return a+b;
    }
};
