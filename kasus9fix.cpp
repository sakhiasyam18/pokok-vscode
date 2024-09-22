#include <iostream>  // Untuk operasi input dan output
#include <iomanip>   // Untuk manipulasi tampilan angka (setprecision dan setw)

using namespace std;

int main() {
    int n; // Jumlah baris tabel
    cout << "Masukkan jumlah baris tabel (1-10): ";
    cin >> n;

    // Validasi input
    if (n < 1 || n > 10) {
        cout << "Input tidak valid! Masukkan angka antara 1 hingga 10." << endl;
        return 1; // Keluar dari program jika input tidak valid
    }

    // Header tabel
    cout << setw(10) << "Meter" 
         << setw(15) << "Sentimeter" 
         << setw(15) << "Milimeter" 
         << setw(15) << "Kilometer" << endl;

    // Loop untuk mengisi tabel
    for (int i = 1; i <= n; ++i) {
        double meter = i;              // Menghitung nilai meter
        double centimeter = meter * 100; // Konversi meter ke sentimeter
        double millimeter = meter * 1000; // Konversi meter ke milimeter
        double kilometer = meter / 1000;  // Konversi meter ke kilometer

        // Menampilkan hasil konversi dalam format tabel
        cout << setw(10) << meter 
             << setw(15) << centimeter 
             << setw(15) << millimeter 
             << setw(15) << kilometer << endl;
    }

    return 0; // Mengakhiri program
}
