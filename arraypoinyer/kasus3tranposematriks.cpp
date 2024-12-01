#include <iostream>
using namespace std;

// Fungsi untuk membuat matriks secara dinamis
int** buatMatriks(int baris, int kolom) {
    int** matriks = new int*[baris]; // Alokasi array baris
    for (int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom]; // Alokasi array kolom
    }
    return matriks;
}

// Fungsi untuk menghapus matriks dari memori
void hapusMatriks(int** matriks, int baris) {
    for (int i = 0; i < baris; i++) {
        delete[] matriks[i]; // Hapus setiap baris
    }
    delete[] matriks; // Hapus array baris
}

// Fungsi untuk menginput elemen matriks
void inputMatriks(int** matriks, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }
}

// Fungsi untuk mencetak matriks (rekursif)
void cetakMatriks(int** matriks, int baris, int kolom, int i = 0) {
    if (i == baris) return; // Basis rekursi
    for (int j = 0; j < kolom; j++) {
        cout << matriks[i][j] << "\t";
    }
    cout << endl;
    cetakMatriks(matriks, baris, kolom, i + 1); // Rekursi ke baris berikutnya
}

// Fungsi untuk menghasilkan transpose matriks
int** transposeMatriks(int** matriks, int baris, int kolom) {
    int** transposed = buatMatriks(kolom, baris); // Baris dan kolom ditukar
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transposed[j][i] = matriks[i][j]; // Tukar elemen
        }
    }
    return transposed;
}

int main() {
    int baris, kolom;

    // Input ukuran matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Buat matriks asli
    int** matriks = buatMatriks(baris, kolom);

    // Input elemen matriks
    cout << "Masukkan elemen matriks:" << endl;
    inputMatriks(matriks, baris, kolom);

    // Cetak matriks asli
    cout << "Matriks asli:" << endl;
    cetakMatriks(matriks, baris, kolom);

    // Hitung transpose matriks
    int** matriksTranspose = transposeMatriks(matriks, baris, kolom);

    // Cetak matriks hasil transpose
    cout << "Matriks transpose:" << endl;
    cetakMatriks(matriksTranspose, kolom, baris);

    // Hapus memori matriks
    hapusMatriks(matriks, baris);
    hapusMatriks(matriksTranspose, kolom);

    return 0;
}
