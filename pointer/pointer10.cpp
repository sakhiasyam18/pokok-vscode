#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Deklarasi array berisi lima elemen
    int *ptr = arr;               // Pointer ptr menunjuk ke elemen pertama array
    int oddCount = 0;             // Inisialisasi variabel penghitung bilangan ganjil

    // Perulangan untuk menghitung jumlah bilangan ganjil
    for (int i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 != 0) { // Mengecek apakah elemen adalah bilangan ganjil
            oddCount++;            // Jika ganjil, tambahkan 1 ke oddCount
        }
    }

    cout << "Jumlah bilangan ganjil: " << oddCount << endl; // Menampilkan jumlah bilangan ganjil

    return 0;  // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
