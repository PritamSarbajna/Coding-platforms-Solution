class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double a = celsius + 273.15;
        double b = (celsius * 1.80) + 32.00;
        
        return {a,b};
    }
};
