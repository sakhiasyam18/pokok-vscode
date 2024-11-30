#include <iostream>
#include <vector>
#include <limits> // Untuk numeric_limits

using namespace std;

// Fungsi rekursif untuk menghitung rata-rata nilai mahasiswa
double hitungRataRata(vector<int>& nilai, int n) {
    if (n == 1) {
        return nilai[0]; // Basis rekursi
    }
    return (nilai[n - 1] + (n - 1) * hitungRataRata(nilai, n - 1)) / n; // Rekursi
}

int main() {
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Validasi input jika jumlah mahasiswa 0
    if (jumlahMahasiswa <= 0) {
        cout << "Jumlah mahasiswa tidak valid! Program dihentikan." << endl;
        return 0;
    }

    vector<int> nilaiMahasiswa(jumlahMahasiswa);
    cout << "Masukkan nilai mahasiswa:" << endl;

    // Input nilai mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilaiMahasiswa[i];
    }

    // Cari nilai terbesar dan terkecil
    int nilaiTertinggi = numeric_limits<int>::min();
    int nilaiTerendah = numeric_limits<int>::max();

    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (nilaiMahasiswa[i] > nilaiTertinggi) {
            nilaiTertinggi = nilaiMahasiswa[i];
        }
        if (nilaiMahasiswa[i] < nilaiTerendah) {
            nilaiTerendah = nilaiMahasiswa[i];
        }
    }

    // Hitung rata-rata menggunakan fungsi rekursif
    double rataRata = hitungRataRata(nilaiMahasiswa, jumlahMahasiswa);

    // Output hasil
    cout << "Nilai terbesar: " << nilaiTertinggi << endl;
    cout << "Nilai terkecil: " << nilaiTerendah << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    return 0;
}
