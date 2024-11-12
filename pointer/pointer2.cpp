#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    char str[] = "Hello, World!"; // Deklarasi array karakter untuk menyimpan string
    char *ptr = str;               // Deklarasi pointer ptr yang menunjuk ke alamat memori str

    cout << "String: ";             // Menampilkan teks "String: " di layar
    while (*ptr) {                  // Perulangan while selama nilai *ptr tidak bernilai null ('\0')
        cout << *ptr;               // Mencetak karakter yang ditunjuk oleh ptr
        ptr++;                      // Menggeser pointer ke karakter berikutnya
    }

    cout << endl;                   // Mengakhiri baris dengan newline
    return 0;                       // Mengembalikan nilai 0 menandakan program selesai tanpa error
}

