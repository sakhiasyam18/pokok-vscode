#include <iostream>
#include <cmath> // Untuk fungsi sqrt() menghitung akar kuadrat
#include <iomanip> // Untuk setprecision dan manipulasi output angka

using namespace std;

int main() {
    double angka[5], jumlah = 0, rata_rata, deviasi, jumlah_variansi = 0;

    // Input lima angka dari pengguna
    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
        jumlah += angka[i]; // Menjumlahkan angka untuk rata-rata
    }

    // Menghitung rata-rata
    rata_rata = jumlah / 5;

    // Menghitung jumlah variansi untuk standar deviasi
    for (int i = 0; i < 5; ++i) {
        jumlah_variansi += pow(angka[i] - rata_rata, 2); // Variansi per angka
    }

    // Menghitung standar deviasi
    deviasi = sqrt(jumlah_variansi / 5);

    // Menampilkan hasil dengan format yang rapi
    cout << fixed << setprecision(2); // Mengatur dua digit desimal
    cout << "Rata-rata: " << rata_rata << endl;
    cout << "Standar Deviasi: " << deviasi << endl;

    return 0;
}
