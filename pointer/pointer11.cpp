#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    int num = 10;         // Deklarasi variabel num dengan nilai 10
    int *ptr = &num;      // Inisialisasi pointer ptr dengan alamat dari num

    cout << "Nilai: " << *ptr << endl; // Menampilkan nilai dari num melalui pointer ptr

    return 0;            // Mengembalikan nilai 0 menandakan program selesai tanpa error
}