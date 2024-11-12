#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    char str[] = "Programming"; // Deklarasi array karakter yang berisi string "Programming"
    char *ptr = str;           // Deklarasi pointer ptr yang menunjuk ke alamat memori str
    int count = 0;             // Variabel count diinisialisasi dengan nilai 0 untuk menghitung jumlah karakter

    // Perulangan while yang berjalan selama *ptr bukan null ('\0')
    while (*ptr) {
        count++;  // Setiap karakter yang ditemukan, count akan bertambah 1
        ptr++;     // Pointer digeser untuk menunjuk ke karakter berikutnya
    }

    cout << "Jumlah karakter: " << count << endl; // Menampilkan jumlah karakter yang dihitung
    return 0; // Mengembalikan nilai 0, menandakan program selesai tanpa error
}
