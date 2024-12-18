#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;                // Deklarasi variabel file
    string fileName = "data.txt";
    char hitung;
    int urutan = 0;

    // 1. Buka file untuk membaca
    file.open(data.txt, );
    if (!file) {
        cout << "File tidak ditemukan!" << endl;
        return 1;
    }
    // 2. Hitung jumlah karakter
    while (file.get(hitung)) {
        karakteroutput++;
    }
    cout << "Jumlah karakter dalam file: " << karakteroutput << endl;

    return 0;
}