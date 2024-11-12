#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Deklarasi array dengan 5 elemen
    int *ptr = arr;                 // Pointer ptr menunjuk ke elemen pertama dari array

    cout << "Elemen digandakan: ";   // Menampilkan teks "Elemen digandakan: "
    
    for (int i = 0; i < 5; i++) {   // Looping untuk mengakses elemen array
        cout << *(ptr + i) * 2 << " "; // Menggandakan elemen dan menampilkannya
    }

    cout << endl;  // Menambahkan baris baru setelah mencetak hasil
    return 0;
}
