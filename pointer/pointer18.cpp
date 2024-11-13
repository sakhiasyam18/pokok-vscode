#include <iostream>
using namespace std;

void copyString(char *src, char *dest) {
    while (*src) {
        *dest = *src;  // Salin karakter yang benar
        src++;
        dest++;
    }
    *dest = '\0';  // Pastikan string hasil salinan memiliki karakter null di akhir
}

int main() {
    char src[] = "Hello";
    char dest[10];
    copyString(src, dest);
    cout << "Hasil copy string: " << dest << endl;
}
