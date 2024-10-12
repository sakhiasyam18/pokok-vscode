#include <iostream>
#include <string>

using namespace std;

int main () {
    int kehadiran, totalkehadiran,persentasekehadiran;
    char lanjut;
    do
    {
        totalkehadiran = 0;
        for (int i = 1; i <=5; i++)
        {
            do
            {
                cout<<"apakah mahasiswa hadir di hari ke- "<<i<<": ";
                cin >> kehadiran;
                
                if (kehadiran !=1 && kehadiran !=0){
                    cout<<"kehadiran tidak valid, masukan 1 untuk hdari dan 0 untuk tidak";
                    cin >> kehadiran;
                }
                
            } while (kehadiran != 1 && kehadiran!=0);
            totalkehadiran +=kehadiran;
        }
        persentasekehadiran = (totalkehadiran * 100) / 5;
        cout << "persentase kehadiran"<<persentasekehadiran<<"%"<<endl;

        if (persentasekehadiran>75){
            cout << "kehadiran baik"<<endl;
        }else if (persentasekehadiran>=50){
            cout << "kehadiran cukup"<<endl;
        }else cout << "kehadiran kurang"<<endl;
        
        cout<<"apakah masih ada lagi? (1 untuk lanjut selain itu berhenti)";
        cin>>lanjut;

    } while (lanjut == '1');
    return 0;
    
}