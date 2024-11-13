#include <iostream>  // Menyertakan pustaka input-output untuk penggunaan cout
using namespace std;

// Fungsi printArray untuk mencetak elemen-elemen array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // Mengakses elemen array menggunakan pointer aritmatika
    }
    cout << endl; // Mengakhiri baris dengan newline
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Deklarasi array numbers dengan 5 elemen
    cout << "Elemen array: ";
    printArray(numbers, 5);  // Memanggil fungsi printArray dengan array numbers dan ukuran 5

    return 0;  // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
