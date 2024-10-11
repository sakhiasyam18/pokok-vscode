#include <iostream>
#include <iomanip>
using namespace std;

int main (){
        string nama;
        int jam, tarif, gaji;

        cout << "Nama Karyawan: ";
        cin >> nama;

        cout << "Jam Kerja: ";
        cin >> jam;
        cout << "Tarif Per Jam: ";
        cin >> tarif;

        gaji=jam*tarif;
        
        cout << right << setw(20) << "Nama Karyawan "
         << setw(20) << "Jam Kerja "
         << setw(20) << "Tarif Per Jam: "
         << setw(20) << "Gaji Total " << endl;

        cout << right << setw(20) << nama
         << setw(20) << jam
         << setw(20) << tarif
         << setw(20) << gaji << endl;

        

}