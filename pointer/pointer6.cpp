#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[5] = {15, 8, 23, 42, 16};  // Deklarasi array dengan 5 elemen
    int *ptr = arr;                    // Pointer ptr menunjuk ke elemen pertama array
    int maxVal = *ptr;                 // Inisialisasi maxVal dengan nilai elemen pertama (15)

    for (int i = 1; i < 5; i++) {      // Perulangan dimulai dari indeks 1
        if (*(ptr + i) > maxVal) {     // Mengecek apakah nilai arr[i] lebih besar dari maxVal
            maxVal = *(ptr + i);       // Jika ya, update maxVal
        }
    }

    cout << "Nilai terbesar: " << maxVal << endl;  // Menampilkan nilai terbesar yang ditemukan
    return 0;
}
