#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Jumlah baris segitiga
    for (int i = n; i >= 1; i--) {  // Loop untuk setiap baris
        for (int j = 1; j <= i; j++) {  // Loop untuk mencetak bintang
            cout << "*";
        }
        cout << endl;  // Pindah ke baris berikutnya setelah selesai mencetak bintang di satu baris
    }
    return 0;
}
