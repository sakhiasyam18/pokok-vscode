#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};   // Deklarasi array arr dengan 5 elemen
    int *ptr = arr + 4;              // Pointer ptr diinisialisasi untuk menunjuk ke elemen terakhir array (arr[4])

    cout << "Elemen array terbalik: ";  // Menampilkan teks "Elemen array terbalik: "
    for (int i = 0; i < 5; i++) {   // Perulangan sebanyak 5 kali untuk mencetak elemen array terbalik
        cout << *(ptr - i) << " ";  // Menampilkan elemen yang ditunjuk oleh (ptr - i)
    }

    cout << endl;  // Mengakhiri output dengan newline
    return 0;      // Mengembalikan nilai 0, menandakan program selesai tanpa error
}
