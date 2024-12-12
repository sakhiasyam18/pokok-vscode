#include <iostream>
using namespace std;

int main() {
    int x[] = {37, 58, 32, 16, 96, 45, 33, 72, 42, 13, 23, 11, 35, 43, 48, 97, 57, 54, 61, 46, 
               62, 21, 63, 18, 47, 64, 98, 70, 24, 56, 68, 41, 69, 93, 9, 80, 66, 39, 88, 38}; // Data awal
    int j = sizeof(x) / sizeof(*x); // Jumlah elemen dalam array
    int temp, pos;

    for (int a = 0; a < j; a++) {
        temp = x[a]; // Inisialisasi nilai sementara
        pos = a;     // Inisialisasi posisi elemen sementara

        for (int b = a; b < j; b++) {
            if (x[b] < temp) {
                temp = x[b]; // Update nilai terkecil
                pos = b;     // Update posisi nilai terkecil
            }
        }

        x[pos] = x[a];
        x[a] = temp;

        cout << endl;
        cout << "Iterasi " << a + 1 << ": ";
        for (int c = 0; c < j; c++) {
            cout << x[c] << "  ";
        }
    }

    cout << "\n\nArray setelah diurutkan:\n";
    for (int c = 0; c < j; c++) {
        cout << x[c] << "  ";
    }

    return 0;
}
