#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan dua matriks 2x2
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input untuk matriks pertama
    cout << "Masukkan elemen matriks pertama:\n";
    cin >> matrix1[0][0] >> matrix1[0][1];
    cin >> matrix1[1][0] >> matrix1[1][1];

    // Input untuk matriks kedua
    cout << "Masukkan elemen matriks kedua:\n";
    cin >> matrix2[0][0] >> matrix2[0][1];
    cin >> matrix2[1][0] >> matrix2[1][1];

    // Menjumlahkan kedua matriks
    result[0][0] = matrix1[0][0] + matrix2[0][0];
    result[0][1] = matrix1[0][1] + matrix2[0][1];
    result[1][0] = matrix1[1][0] + matrix2[1][0];
    result[1][1] = matrix1[1][1] + matrix2[1][1];

    // Menampilkan hasil penjumlahan matriks
    cout << "Hasil penjumlahan matriks:\n";
    cout << result[0][0] << " " << result[0][1] << endl;
    cout << result[1][0] << " " << result[1][1] << endl;

    return 0;
}
