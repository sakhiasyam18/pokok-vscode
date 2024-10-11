#include <iostream>   // Untuk operasi input dan output
#include <iomanip>    // Untuk manipulasi tampilan angka (presisi desimal)
using namespace std;

int main() {
    // Deklarasi variabel
    int panjang, lebar, tinggi, hargaPerLiter;  // Menyimpan ukuran ruangan dan harga per liter cat
    double luasDinding, jumlahLiterCat, totalBiaya;  // Variabel untuk hasil perhitungan

    // Input data dari pengguna
    cout << "Panjang ruangan (meter): ";
    cin >> panjang;  // Input panjang ruangan

    cout << "Lebar ruangan (meter): ";
    cin >> lebar;  // Input lebar ruangan

    cout << "Tinggi ruangan (meter): ";
    cin >> tinggi;  // Input tinggi ruangan

    cout << "Harga cat per liter (Rp): ";
    cin >> hargaPerLiter;  // Input harga per liter cat

    // Menghitung luas total dinding ruangan
    // Asumsi: Luas dinding = 2 * (panjang * tinggi + lebar * tinggi)
    luasDinding = 2 * (panjang * tinggi + lebar * tinggi);

    // Menghitung jumlah liter cat yang dibutuhkan (1 liter untuk 10 m²)
    jumlahLiterCat = luasDinding / 10.0;

    // Menghitung total biaya cat
    totalBiaya = jumlahLiterCat * hargaPerLiter;

    // Tampilkan hasil perhitungan dengan format rapi (dua digit di belakang koma)
    cout << "=========================================" << endl;
    cout << "Luas dinding total: " << fixed << setprecision(2) << luasDinding  << endl;  // Menampilkan luas dinding
    cout << "Jumlah liter cat yang dibutuhkan: " << fixed << setprecision(2) << jumlahLiterCat << " liter" << endl;  // Menampilkan jumlah liter cat
    cout << "Total biaya cat yang dibutuhkan: Rp " << fixed << setprecision(2) << totalBiaya << endl;  // Menampilkan total biaya cat

    return 0;
}
