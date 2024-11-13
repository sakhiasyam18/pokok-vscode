#include <iostream>  // Menyertakan pustaka input-output untuk penggunaan cout
using namespace std;

// Fungsi swap untuk menukar nilai dari dua variabel yang ditunjuk oleh x dan y
void swap(int *x, int *y) {
    int temp = *x; // Menyimpan nilai yang ditunjuk oleh x ke temp
    *x = *y;       // Mengatur nilai yang ditunjuk oleh x menjadi nilai yang ditunjuk oleh y
    *y = temp;     // Mengatur nilai yang ditunjuk oleh y menjadi nilai temp
}

int main() {
    int a = 5, b = 10;           // Deklarasi variabel a dan b
    swap(&a, &b);                // Memanggil fungsi swap dengan alamat variabel a dan b
    cout << "a = " << a << ", b = " << b << endl; // Menampilkan nilai a dan b setelah ditukar

    return 0;  // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
