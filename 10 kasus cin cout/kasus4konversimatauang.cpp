#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Deklarasi variabel
    double rupiah, kurs, dollar;

    // Input data rupiah dan kurs konversi
    cout << "Jumlah Rupiah: ";
    cin >> rupiah;

    cout << "Kurs Konversi: ";
    cin >> kurs;

    // Hitung jumlah dollar
    dollar = rupiah / kurs;

    // Tampilkan hasil dengan dua digit di belakang koma
    cout << fixed << setprecision(2);
    cout << "Jumlah Rupiah: Rp " << rupiah << endl;
    cout << "Kurs Konversi: " << kurs << endl;
    cout << "Jumlah Dollar: $ " << dollar << endl;

    return 0;
}
