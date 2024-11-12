#include <iostream>  // Menyertakan pustaka input-output untuk penggunaan fungsi cout
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Deklarasi array berisi 5 elemen
    int *ptr = arr; // Deklarasi pointer yang menunjuk ke elemen pertama dari array arr

    cout << "Elemen array: "; // Menampilkan teks "Elemen array: "

    // Loop untuk menampilkan setiap elemen array menggunakan pointer
    for (int i = 0; i <= 5; i++) { // Loop ini memiliki kesalahan pada kondisi, seharusnya i < 5
        cout << *(ptr + i) << " "; // Mengakses elemen array menggunakan pointer dan menampilkan nilainya
    }

    cout << endl; // Baris baru setelah semua elemen array ditampilkan
    return 0;
}
