#include <iostream>

using namespace std;

int main() {
    int matrix[3][3];

    // Input elemen matriks
    cout << "Masukkan elemen matriks 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Cetak matriks
    cout << "Matriks yang Anda masukkan:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}