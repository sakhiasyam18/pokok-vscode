#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Produk {
    string nama;
    int harga;
    int jumlahTerjual;
    int pendapatan;
};

int main() {
    int jumlahProduk;

    // Input jumlah produk
    cout << "Masukkan jumlah produk: ";
    cin >> jumlahProduk;

    if (jumlahProduk <= 0) {
        cout << "Tidak ada produk yang dimasukkan. Program selesai." << endl;
        return 0; // Keluar dari program jika jumlah produk 0 atau kurang
    }

    // Alokasi array dinamis untuk data produk
    Produk* produk = new Produk[jumlahProduk];

    // Input data produk
    for (int i = 0; i < jumlahProduk; i++) {
        cout << "Masukkan data produk ke-" << i + 1 << endl;
        cout << "Nama produk: ";
        cin >> produk[i].nama;
        cout << "Harga satuan: ";
        cin >> produk[i].harga;
        cout << "Jumlah terjual: ";
        cin >> produk[i].jumlahTerjual;

        // Hitung pendapatan untuk produk ini
        produk[i].pendapatan = produk[i].harga * produk[i].jumlahTerjual;
    }

    // Hitung total pendapatan dan pendapatan rata-rata
    int totalPendapatan = 0;
    int pendapatanTertinggi = 0;
    string produkTertinggi;

    for (int i = 0; i < jumlahProduk; i++) {
        totalPendapatan += produk[i].pendapatan;

        // Cari pendapatan tertinggi
        if (produk[i].pendapatan > pendapatanTertinggi) {
            pendapatanTertinggi = produk[i].pendapatan;
            produkTertinggi = produk[i].nama;
        }
    }

    double rataRataPendapatan = static_cast<double>(totalPendapatan) / jumlahProduk;

    // Tampilkan hasil
    cout << fixed << setprecision(2);
    cout << "Total pendapatan: Rp " << totalPendapatan << endl;
    cout << "Rata-rata pendapatan per produk: Rp " << rataRataPendapatan << endl;
    cout << "Produk dengan pendapatan tertinggi: \"" << produkTertinggi << "\" (Rp " << pendapatanTertinggi << ")" << endl;

    // Bebaskan memori
    delete[] produk;

    return 0;
}
