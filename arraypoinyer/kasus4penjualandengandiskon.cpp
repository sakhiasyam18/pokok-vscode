#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi rekursif untuk menghitung total harga setelah diskon
double hitungDiskon(int* harga, int jumlahBarang, int index, double total) {
    if (index == jumlahBarang) {
        return total;
    }

    int hargaBarang = harga[index];
    double diskon = 0.0;

    // Menentukan diskon berdasarkan harga barang
    if (hargaBarang > 500000) {
        diskon = hargaBarang * 0.10;  // 10% diskon
        cout << "Diskon untuk barang " << index + 1 << ": 10%" << endl;
    } else if (hargaBarang >= 100001 && hargaBarang <= 500000) {
        diskon = hargaBarang * 0.05;  // 5% diskon
        cout << "Diskon untuk barang " << index + 1 << ": 5%" << endl;
    } else {
        cout << "Diskon untuk barang " << index + 1 << ": Tidak ada diskon" << endl;
    }

    // Hitung total harga setelah diskon barang ini
    double hargaSetelahDiskon = hargaBarang - diskon;
    return hitungDiskon(harga, jumlahBarang, index + 1, total + hargaSetelahDiskon);
}

int main() {
    int jumlahBarang;

    // Input jumlah barang
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    // Alokasi array dinamis untuk harga barang
    int* harga = new int[jumlahBarang];

    // Input harga barang
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "Masukkan harga barang ke-" << i + 1 << ": ";
        cin >> harga[i];
    }

    // Hitung total harga setelah diskon
    double totalSetelahDiskon = hitungDiskon(harga, jumlahBarang, 0, 0.0);

    // Tampilkan total harga setelah diskon
    cout << fixed << setprecision(2);
    cout << "Total harga setelah diskon: Rp " << totalSetelahDiskon << endl;

    // Bebaskan memori
    delete[] harga;

    return 0;
}
