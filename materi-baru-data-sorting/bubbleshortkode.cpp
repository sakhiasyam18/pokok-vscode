bubble short kode
#include <iostream> // Mengimpor library iostream untuk input dan output
using namespace std;

// Fungsi untuk mengurutkan array menggunakan algoritma Bubble Sort
void bubbleSort(int arr[], int n) {
    // Perulangan untuk melakukan iterasi ke seluruh elemen array
    for (int i = 0; i < n - 1; i++) {
        // Perulangan untuk membandingkan elemen bersebelahan
        for (int j = 0; j < n - i - 1; j++) {
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar posisi
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Menukar elemen menggunakan fungsi swap bawaan C++
            }
        }
    }
}

// Fungsi untuk mencetak elemen-elemen dalam array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Iterasi ke seluruh elemen array
        cout << arr[i] << " "; // Mencetak elemen array dengan spasi
    }
    cout << endl; // Pindah baris setelah mencetak semua elemen
}

int main() {
    int n; // Variabel untuk jumlah bilangan dalam array

    // Meminta pengguna memasukkan jumlah bilangan
    cout << "Masukkan jumlah bilangan yang ingin diurutkan (maks 100): ";
    cin >> n;

    // Validasi input: memastikan jumlah bilangan tidak melebihi 100
    while (n > 100) {
        cout << "Jumlah bilangan melebihi batas maksimal. Silakan masukkan jumlah bilangan yang ingin diurutkan (maks 100): ";
        cin >> n;
    }

    int arr[n]; // Deklarasi array untuk menyimpan bilangan yang dimasukkan

    // Meminta pengguna memasukkan elemen-elemen array
    cout << "Masukkan " << n << " bilangan yang ingin diurutkan: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elemen array dari pengguna
    }

    // Menampilkan bilangan sebelum diurutkan
    cout << "Bilangan-bilangan sebelum diurutkan: ";
    printArray(arr, n); // Memanggil fungsi untuk mencetak array

    // Mengurutkan array menggunakan Bubble Sort
    bubbleSort(arr, n); // Memanggil fungsi bubbleSort

    // Menampilkan bilangan setelah diurutkan
    cout << "Bilangan-bilangan setelah diurutkan: ";
    printArray(arr, n); // Memanggil fungsi untuk mencetak array

    return 0; // Mengakhiri program
}