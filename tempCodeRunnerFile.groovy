#include <iostream>
#include <string>

using namespace std;

int main () {
    string kategoripengeluaran;
    int jumlahpengeluaran = 0, totalpengeluaranmakanan = 0, totalpengeluarankendaraan = 0, totalpengeluarangiburan = 0, totalpengeluaranlainya = 0, totalpengeluaranselamaseminggu;
    char lanjut;

    do {
        // Reset total pengeluaran harian
        totalpengeluaranmakanan = 0;
        totalpengeluarankendaraan = 0;
        totalpengeluarangiburan = 0;
        totalpengeluaranlainya = 0;

        for (int i = 1; i <= 7; i++) { // Menggunakan 7 hari untuk seminggu
            cout << "Masukan kategori pengeluaran hari ke-" << i << " (makanan/transportasi/hiburan/lain lain): ";
            cin >> kategoripengeluaran;
            cout << "Masukan jumlah pengeluaran: ";
            cin >> jumlahpengeluaran;

            if (kategoripengeluaran == "makanan" || kategoripengeluaran == "Makanan") {
                totalpengeluaranmakanan += jumlahpengeluaran; 
            } else if (kategoripengeluaran == "kendaraan" || kategoripengeluaran == "Kendaraan" || kategoripengeluaran == "transportasi") {
                totalpengeluarankendaraan += jumlahpengeluaran;
            } else if (kategoripengeluaran == "hiburan") {
                totalpengeluarangiburan += jumlahpengeluaran;
            } else {
                totalpengeluaranlainya += jumlahpengeluaran;
            }
        }

        // Hitung total pengeluaran selama seminggu
        totalpengeluaranselamaseminggu = totalpengeluaranmakanan + totalpengeluarankendaraan + totalpengeluarangiburan + totalpengeluaranlainya;

        // Menentukan kategori pengeluaran terbesar
        int terbesar = totalpengeluaranmakanan;
        string kategori_terbesar = "makanan";

        if (totalpengeluarangiburan > terbesar) {
            terbesar = totalpengeluarangiburan;
            kategori_terbesar = "hiburan";
        }
        if (totalpengeluarankendaraan > terbesar) {
            terbesar = totalpengeluarankendaraan;
            kategori_terbesar = "kendaraan";
        }
        if (totalpengeluaranlainya > terbesar) {
            terbesar = totalpengeluaranlainya;
            kategori_terbesar = "lain-lain";
        }

        // Tampilkan hasil pengeluaran
        cout << "Total pengeluaran makanan: " << totalpengeluaranmakanan << endl;
        cout << "Total pengeluaran hiburan: " << totalpengeluarangiburan << endl;
        cout << "Total pengeluaran kendaraan: " << totalpengeluarankendaraan << endl;
        cout << "Total pengeluaran lainya: " << totalpengeluaranlainya << endl;
        cout << "Total pengeluaran selama seminggu: " << totalpengeluaranselamaseminggu << endl;
        cout << "Total pengeluaran terbesar: " << terbesar << " pada kategori " << kategori_terbesar << endl;

        // Tanya apakah ingin mencatat pengeluaran untuk minggu lain
        cout << "Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> lanjut;

    } while (lanjut == '1');  // Melanjutkan jika input '1'

    return 0;
}
