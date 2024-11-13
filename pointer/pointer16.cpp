#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

// Fungsi untuk membalik elemen-elemen dalam array
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) { // Iterasi hingga setengah dari ukuran array
        int temp = arr[i];               // Menyimpan nilai elemen saat ini dalam variabel sementara
        arr[i] = arr[size - i - 1];      // Menukar elemen di awal dengan elemen di akhir
        arr[size - i - 1] = temp;        // Menempatkan elemen sementara ke posisi yang ditukar
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};         // Deklarasi array dengan 5 elemen
    int size = sizeof(arr) / sizeof(arr[0]); // Menghitung jumlah elemen dalam array
    reverseArray(arr, size);              // Memanggil fungsi untuk membalik array

    cout << "Array setelah dibalik: ";
    for (int i = 0; i < size; i++) {      // Menampilkan elemen-elemen array setelah dibalik
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; // Mengembalikan nilai 0 menandakan program selesai tanpa error
}
