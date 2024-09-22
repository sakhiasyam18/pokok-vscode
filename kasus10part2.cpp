#include <iostream>
#include <cmath>       // Untuk fungsi sqrt() menghitung akar kuadrat
#include <iomanip>     // Untuk manipulasi tampilan desimal dengan setprecision

using namespace std;

int main() {
    // Deklarasi variabel untuk menampung lima angka
    double angka1, angka2, angka3, angka4, angka5;

    // Input dari pengguna
    cout << "Masukkan angka pertama: "; cin >> angka1;
    cout << "Masukkan angka kedua: "; cin >> angka2;
    cout << "Masukkan angka ketiga: "; cin >> angka3;
    cout << "Masukkan angka keempat: "; cin >> angka4;
    cout << "Masukkan angka kelima: "; cin >> angka5;

    // Menghitung rata-rata
    double rata_rata = (angka1 + angka2 + angka3 + angka4 + angka5) / 5.0;

    // Menghitung variansi (rata-rata kuadrat deviasi dari rata-rata)
    double variansi = ((pow(angka1 - rata_rata, 2) + pow(angka2 - rata_rata, 2) +
                        pow(angka3 - rata_rata, 2) + pow(angka4 - rata_rata, 2) +
                        pow(angka5 - rata_rata, 2)) / 5);

    // Menghitung standar deviasi (akar dari variansi)
    double std_deviasi = sqrt(variansi);

    // Menampilkan hasil dengan format dua digit desimal
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rata_rata << endl;
    cout << "Standar Deviasi: " << std_deviasi << endl;

    return 0;
}
