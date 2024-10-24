#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung pangkat
int power(int base, int exponent) {
    if (exponent == 0) {  // Basis: jika eksponen 0, hasilnya 1
        return 1;
    } else {  // Rekurens: kalikan basis dengan hasil power base^(exponent - 1)
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base = 2;       // Nilai basis
    int exponent = 3;   // Nilai eksponen

    // Memanggil fungsi rekursif dan menampilkan hasilnya
    cout << base << " pangkat " << exponent << " adalah: " << power(base, exponent) << endl;

    return 0;
}
