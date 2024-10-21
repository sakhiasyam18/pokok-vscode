#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dilewati
        if (luas % 2 == 0) {
            // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna
            bool kuadrat_sempurna = false;
            for (int k = 1; k * k <= luas; k++) {
                // Jika luas adalah tepat k * k,
                // maka luas ini merupakan bilangan kuadrat sempurna
                if (k * k == luas) {
                    kuadrat_sempurna = true;
                    break;
                }
            }
            if (kuadrat_sempurna) {
                // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat
                // Cetak luas ini
                cout << "Luas kolam terkecil: " << luas << " cm persegi" << endl;
                // Kita tidak perlu lagi melanjutkan perulangan
                break;
            }
        }
    }
    return 0;
}
