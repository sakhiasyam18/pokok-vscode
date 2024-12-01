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

// Fungsi untuk mencetak matriks
void cetakMatriks(int** matriks, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk mengalikan dua matriks
int** kalikanMatriks(int** matriksA, int barisA, int kolomA, int** matriksB, int barisB, int kolomB) {
    // Validasi jika matriks tidak bisa dikalikan
    if (kolomA != barisB) {
        cout << "Matriks tidak dapat dikalikan. Kolom matriks A harus sama dengan baris matriks B." << endl;
        return nullptr;
    }

    // Buat matriks hasil
    int** hasil = buatMatriks(barisA, kolomB);

    // Perkalian matriks
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            hasil[i][j] = 0; // Inisialisasi elemen
            for (int k = 0; k < kolomA; k++) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    return hasil;
}

int main() {
    int barisA, kolomA, barisB, kolomB;

    // Input ukuran matriks A
    cout << "Masukkan jumlah baris Matriks A: ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom Matriks A: ";
    cin >> kolomA;

    // Input ukuran matriks B
    cout << "Masukkan jumlah baris Matriks B: ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom Matriks B: ";
    cin >> kolomB;

    // Validasi ukuran matriks agar bisa dikalikan
    if (kolomA != barisB) {
        cout << "Matriks tidak dapat dikalikan. Kolom Matriks A harus sama dengan Baris Matriks B." << endl;
        return 0;
    }

    // Buat matriks A dan B secara dinamis
    int** matriksA = buatMatriks(barisA, kolomA);
    int** matriksB = buatMatriks(barisB, kolomB);

    // Input elemen matriks A
    cout << "Masukkan elemen Matriks A:" << endl;
    inputMatriks(matriksA, barisA, kolomA);

    // Input elemen matriks B
    cout << "Masukkan elemen Matriks B:" << endl;
    inputMatriks(matriksB, barisB, kolomB);

    // Kalikan Matriks A dan B
    int** hasil = kalikanMatriks(matriksA, barisA, kolomA, matriksB, barisB, kolomB);

    // Cetak hasil perkalian matriks
    if (hasil != nullptr) {
        cout << "Hasil perkalian Matriks A dan B:" << endl;
        cetakMatriks(hasil, barisA, kolomB);
    }

    // Hapus memori matriks
    hapusMatriks(matriksA, barisA);
    hapusMatriks(matriksB, barisB);
    if (hasil != nullptr) hapusMatriks(hasil, barisA);

    return 0;
}
