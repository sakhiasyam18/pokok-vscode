#include <iostream>

using namespace std;

int main(){

    int i, pilihan, kehadiran, persentase_kehadiran, valid, loop;

    do{
        kehadiran = 0;
        for(i = 1; i<=5; i++){
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir, 0 untuk tidak hadir) : ";
            cin >> pilihan;
            valid = (pilihan == 0) || (pilihan == 1);
            if(!valid){
                cout << "Input tidak valid, masukkan angka 0 atau 1" << endl;
                i--;
                pilihan = 0;
            }
            kehadiran = kehadiran + pilihan;
        }

        persentase_kehadiran = (kehadiran * 100)/5;
        
            cout << "Persentase kehadiran : " << persentase_kehadiran << "% " << endl;
        if (persentase_kehadiran >= 75){
            cout << "Status Kehadiran : Baik\n";
        }
        else if (persentase_kehadiran >= 50 && persentase_kehadiran <= 75){
            cout << "Status Kehadiran : Cukup\n";
        }
        else if (persentase_kehadiran <= 50){
            cout << "Status Kehadiran : Kurang\n";
        }

            cout << "ingin mengecek kehadiran mahasiswa yang lain? (1 untuk ya, selain itu untuk tidak): ";
            cin >> loop;
    }while (loop == 1);
}