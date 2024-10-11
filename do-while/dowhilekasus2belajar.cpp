#include <iostream>
using namespace std;

int main () {
    const int totalhari = 5;
    int totalhadir, kehadiran;
    char ulangi;

    do{
        for (int i = 1; i <= kehadiran; i++)
        {
            cout << "Apakah mahasiswa hadir di hari ke- " << i << "? (1 untuk hadir, 0 untuk tidak hadir)";
            cin >> kehadiran;
            if (kehadiran  == 1){
                totalhadir++;
            }
            
        }

        float persentasekehadiran = (float(totalhadir)) / totalhari* 100;
        
        if (kehadiran > 75){
            cout << "persentase kehadiran Baik";
        }else if (kehadiran <50){
            cout << "kehadiran cukup";
        }else cout << "kehadiran kurang ";
        
        
    } while (ulangi = '1');
    
}