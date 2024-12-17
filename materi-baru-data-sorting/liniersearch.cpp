#include <iostream>   // Mengimpor library untuk input dan output
#include <vector>     // Mengimpor library vector untuk menyimpan data dalam bentuk dinamis
#include <string>     // Mengimpor library string untuk menangani tipe data string

using namespace std;

// Fungsi linearSearch untuk mencari target di dalam array
int linearSearch(const vector<string>& arr, const string& target) {
    // Perulangan untuk memeriksa setiap elemen dalam vektor
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {  // Jika elemen ditemukan
            return i;  // Kembalikan indeks elemen yang sesuai
        }
    }
    return -1;  // Jika target tidak ditemukan, kembalikan -1
}

int main() {
    // Deklarasi vektor untuk menyimpan ID karyawan
    vector<string> IDs_karyawan = {
        "E101", "E102", "E103", "E104", "E105", "E106", "E107", "E108", "E109", "E110"
        "E111", "E112", "E113", "E114", "E115", "E116", "E117", "E118", "E119", "E120",
        /* Data ini berisi ID karyawan dari E101 sampai E1000 (Sebagian data dihapus untuk singkat) */
    };

    // Deklarasi variabel untuk menyimpan ID yang ingin dicari
    string target;
    cout << "Masukkan ID karyawan yang ingin dicari: ";
    cin >> target;  // Input ID karyawan yang ingin dicari

    // Memanggil fungsi linearSearch untuk mencari target di dalam vektor IDs_karyawan
    int result = linearSearch(IDs_karyawan, target);

    // Menampilkan hasil pencarian
    if (result != -1) {  // Jika ID ditemukan
        cout << "ID karyawan " << target << " ditemukan pada indeks " << result << endl;
    } else {  // Jika ID tidak ditemukan
        cout << "ID karyawan " << target << " tidak ditemukan." << endl;
    }

    return 0;  // Mengakhiri program
}
