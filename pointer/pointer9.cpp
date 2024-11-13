#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Deklarasi array berisi lima elemen
    int *ptr = arr;                    // Pointer ptr menunjuk ke elemen pertama array

    cout << "Indeks dan nilai: " << endl; // Menampilkan teks "Indeks dan nilai"
    
    // Perulangan untuk menampilkan indeks dan nilai elemen array
    for (int i = 0; i < 5; i++) {
        cout << "Indeks " << i << ": " << *(ptr + i) << endl; // Cetak indeks dan nilai elemen
    }

    return 0;  // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
