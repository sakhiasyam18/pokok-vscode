#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Deklarasi variabel
    double tinggi, berat, bmi;
    string status;

    // Input tinggi dan berat badan
    cout << "Masukkan Tinggi (cm): ";
    cin >> tinggi;

    cout << "Masukkan Berat (kg): ";
    cin >> berat;

    // Hitung BMI
    bmi = berat / ((tinggi / 100) * (tinggi / 100));

    // Tentukan status berat badan ideal
    if (bmi >= 18.5 && bmi <= 24.9) {
        status = "Ya";
    } else {
        status = "Tidak";
    }

    // Tampilkan hasil dengan dua digit di belakang koma
    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << endl;
    cout << "Status Berat Badan Ideal: " << status << endl;

    return 0;
}