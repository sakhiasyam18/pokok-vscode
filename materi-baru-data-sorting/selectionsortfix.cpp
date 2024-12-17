//selection sort fix
#include <iostream> // Mengimpor library iostream untuk input dan output
using namespace std;

int main() {
    // Inisialisasi array dengan data awal
    int x[] = {37, 37, 37, 58, 58, 32, 16, 96, 45, 33, 72, 42, 13, 23, 11, 35, 43, 48, 97, 57, 54, 61, 46,
            62, 21, 63, 18, 47, 64, 98, 70, 24, 56, 68, 41, 69, 93, 9, 80, 66, 39, 88, 38};
    // Menghitung jumlah elemen dalam array
    int j = sizeof(x) / sizeof(*x); // sizeof(x) adalah ukuran total array, sizeof(*x) ukuran satu elemen
    int temp, pos; // Variabel untuk penyimpanan sementara dan posisi elemen terkecil

    // Loop untuk melakukan proses sorting pada array
    for (int a = 0; a < j; a++) {
        temp = x[a]; // Menyimpan nilai elemen saat ini sebagai nilai sementara (default terkecil)
        pos = a;     // Menyimpan posisi elemen yang sedang dicek

        // Loop untuk mencari elemen terkecil di sisa array
        for (int b = a; b < j; b++) {
            if (x[b] < temp) { // Jika elemen lebih kecil dari nilai sementara
                temp = x[b]; // Update nilai terkecil
                pos = b;     // Update posisi elemen terkecil
            }
        }
    
        // Menukar nilai elemen terkecil dengan elemen di posisi saat ini
        x[pos] = x[a]; // Nilai elemen terkecil dipindahkan ke posisi awal yang belum terurut
        x[a] = temp;   // Menyimpan nilai terkecil di posisi yang benar

        // Menampilkan array setelah setiap iterasi proses sorting
        cout << endl;
        cout << "Iterasi " << a + 1 << ": ";
        for (int c = 0; c < j; c++) {
            cout << x[c] << "  "; // Menampilkan elemen-elemen array
        }
    }

    // Menampilkan hasil akhir array setelah proses sorting selesai
    cout << "\n\nArray setelah diurutkan:\n";
    for (int c = 0; c < j; c++) {
        cout << x[c] << "  "; // Mencetak elemen array yang sudah diurutkan
    }

    return 0; // Mengakhiri program
}