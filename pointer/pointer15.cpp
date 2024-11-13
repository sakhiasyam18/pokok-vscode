#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

// Fungsi increment untuk menambah nilai yang ditunjuk oleh x
void increment(int *x) {
    (*x)++; // Menambah nilai yang ditunjuk oleh x sebesar 1
}

int main() {
    int num = 10;                // Deklarasi variabel num dengan nilai awal 10
    increment(&num);             // Memanggil fungsi increment dengan alamat variabel num
    cout << "Nilai num setelah increment: " << num << endl; // Menampilkan nilai num setelah ditambah

    return 0; // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
