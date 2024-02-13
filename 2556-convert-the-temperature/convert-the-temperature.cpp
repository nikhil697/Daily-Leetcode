class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> new1;
        double kelvin=celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        new1.push_back(kelvin);
        new1.push_back(fahrenheit);
        return new1;
    }
};