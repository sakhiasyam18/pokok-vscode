#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklarasi variabel
    double hari1, hari2, hari3, hari4, hari5, rata;

    // Input suhu harian
    cout << "Suhu Hari ke-1: ";
    cin >> hari1;

    cout << "Suhu Hari ke-2: ";
    cin >> hari2;

    cout << "Suhu Hari ke-3: ";
    cin >> hari3;

    cout << "Suhu Hari ke-4: ";
    cin >> hari4;

    cout << "Suhu Hari ke-5: ";
    cin >> hari5;

    // Menghitung rata-rata suhu
    rata = (hari1 + hari2 + hari3 + hari4 + hari5) / 5;

    // Tampilkan rata-rata dengan presisi 1 angka di belakang koma
    cout << fixed << setprecision(1);
    cout << "=======================" << endl;
    cout << "Rata-rata Suhu: " << rata << endl;

    return 0;
}
