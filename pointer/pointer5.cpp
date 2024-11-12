#include <iostream>  // Menyertakan pustaka input-output untuk fungsi cout
using namespace std;

int main() {
    char source[] = "Hello";    // Deklarasi array source berisi string "Hello"
    char destination[6];        // Array destination untuk menampung hasil salinan
    char *srcPtr = source;      // Pointer srcPtr menunjuk ke awal array source
    char *destPtr = destination; // Pointer destPtr menunjuk ke awal array destination

    // Menyalin string dari source ke destination
    while (*srcPtr) {           // Perulangan selama srcPtr tidak menunjuk ke '\0'
        *destPtr = *srcPtr;      // Salin karakter yang ditunjuk oleh srcPtr ke destPtr
        srcPtr++;                // Pindahkan pointer srcPtr ke karakter berikutnya
        destPtr++;               // Pindahkan pointer destPtr ke karakter berikutnya
    }

    *destPtr = '\0';            // Tambahkan karakter null '\0' di akhir string destination
    cout << "String tujuan: " << destination << endl; // Menampilkan hasil string tujuan
    return 0;                   // Mengembalikan nilai 0, menandakan program selesai
}
