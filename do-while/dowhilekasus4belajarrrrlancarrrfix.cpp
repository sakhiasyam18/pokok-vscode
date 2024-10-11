#include <iostream>
#include <string>

using namespace std;

int main (){
    float jumlahmatapelajaran, hasilnilainya, totalnilai;
    float ratarata;
    char lanjut;

    do{
        totalnilai = 0;
        cout << "masukan jumlah mata pelajaran";
        cin >> jumlahmatapelajaran;

        for (int i = 1; i <= jumlahmatapelajaran; i++){
            cout << "masukan hasil nilai mata pelajaran ke- " << i << ": ";
            cin >> hasilnilainya;
            totalnilai += hasilnilainya;
            //ratarata = hasilnilainya / jumlahmatapelajaran;
        }
        
        // totalnilai = hasilnilainya + 
        ratarata = totalnilai / jumlahmatapelajaran ;
        
        if (totalnilai >= 85){
            cout << "Sangat baik" << endl;
        }else if (totalnilai >70 || totalnilai <85){
            cout << "Baik" << endl;
        }else if (totalnilai < 50){
            cout << "perlu peningkatan";
        }else cout << "cukup" << endl;

        cout << "rata rata nilai :" <<ratarata<< endl;
        cout << "ingin menghitung nilai untuk siswa lain? (1 untuk ya, selain itu untuk tidak)"<< endl;
        cin >> lanjut;
    } while (lanjut == '1');
    
    return 0;
}