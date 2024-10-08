#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // Use <cmath> instead of <math.h> for C++ standard
using namespace std;

int main() {
    double beratBadan, tinggiBadan, bmi;
    const double BMI_MIN = 18.5, BMI_MAX = 24.9;

    cout << "Masukkan berat badan Anda (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan Anda (cm): ";
    cin >> tinggiBadan;

    tinggiBadan = tinggiBadan / 100; // Convert height to meters
    bmi = beratBadan / (tinggiBadan * tinggiBadan);

    cout << "BMI Anda: " << fixed << setprecision(2) << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obesitas" << endl;
    }

    return 0;
}
