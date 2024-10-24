#include <iostream>

using namespace std;

int pangkat_dua(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Jika pangkat 0, hasilnya selalu 1
    } else {
        return base * pangkat_dua(base, exponent - 1); // Panggil fungsi rekursif dengan pangkat dikurangi 1
    }
}

int main() {
    int base = 2, exponent = 3;
    cout << base << " pangkat " << exponent << " adalah: " << pangkat_dua(base, exponent) << endl;
    return 0;
}