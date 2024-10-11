#include <iostream>
using namespace std;

int main() {
    int jumlahBarang;
    float *hargaBarang;  // Pointer untuk menyimpan array dinamis
    float totalHarga = 0, diskon = 0, totalSetelahDiskon;
    char lanjutBelanja;

    do {
        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

        // Alokasi memori dinamis untuk menyimpan harga barang
        hargaBarang = new float[jumlahBarang];

        for (int i = 0; i < jumlahBarang; i++) {
            cout << "Masukkan harga barang ke-" << i + 1 << ": Rp ";
            cin >> hargaBarang[i];
            totalHarga += hargaBarang[i];
        }

        cout << "Total Harga: Rp " << totalHarga << endl;

        // Menentukan diskon
        if (totalHarga > 500000) {
            diskon = 0.10 * totalHarga;
        } else if (totalHarga >= 250000) {
            diskon = 0.05 * totalHarga;
        } else {
            diskon = 0;
        }

        totalSetelahDiskon = totalHarga - diskon;

        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << endl;

        // Tanya apakah ingin menambahkan belanjaan lagi
        cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
        cin >> lanjutBelanja;

        // Reset total harga dan bebaskan memori yang telah dialokasikan
        totalHarga = 0;
        delete[] hargaBarang;  // Bebaskan memori yang digunakan oleh array dinamis

    } while (lanjutBelanja == '1');

    return 0;
}
