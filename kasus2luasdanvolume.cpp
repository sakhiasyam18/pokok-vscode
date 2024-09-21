#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Deklarasi variabel
    int panjang, lebar, tinggi;
    int volume, luasPermukaan;

    // Input data balok
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    // Hitung volume dan luas permukaan
    volume = panjang * lebar * tinggi;
    luasPermukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

    // Tampilkan hasil dalam format tabel
    cout << left << setw(10) << "Panjang"
         << setw(10) << "Lebar"
         << setw(10) << "Tinggi"
         << setw(10) << "Volume"
         << setw(20) << "Luas Permukaan" << endl;

    cout << left << setw(10) << panjang
         << setw(10) << lebar
         << setw(10) << tinggi
         << setw(10) << volume
         << setw(20) << luasPermukaan << endl;

    return 0;
}
