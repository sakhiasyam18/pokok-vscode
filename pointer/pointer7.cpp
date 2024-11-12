#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};  // Deklarasi array dengan 6 elemen
    int *ptr = arr;                    // Pointer ptr menunjuk ke elemen pertama dari array

    cout << "Elemen genap: ";           // Menampilkan teks "Elemen genap: "
    
    for (int i = 0; i < 6; i++) {      // Looping untuk mengakses elemen array
        if (*(ptr + i) % 2 == 0) {     // Mengecek apakah elemen genap
            cout << *(ptr + i) << " "; // Jika genap, tampilkan elemen
        }
    }

    cout << endl;  // Menambahkan baris baru setelah mencetak hasil
    return 0;
}
