#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    double konsumsibahanbakar, hargaperliter, totalbiayabahanbakar, efisiensibahanbakar, jaraktempuh;

    cout << "Masukkan jarak tempuh (dalam km): " ;
    cin >> jaraktempuh;
    cout << "Masukkan konsumsi bahan bakar (km per liter): " ;
    cin >> konsumsibahanbakar;
    cout << "Masukkan harga bahan bakar (dalam rupiah per liter) : " ;
    cin >> hargaperliter ;
    
    // Hitung total biaya bahan bakar
    totalbiayabahanbakar = (jaraktempuh / konsumsibahanbakar) * hargaperliter;

    // Hitung efisiensi bahan bakar
    efisiensibahanbakar = konsumsibahanbakar;

        // Tampilkan hasil
    cout << "Jarak tempuh (km)         : " << jaraktempuh << endl;
    cout << "Konsumsi bahan bakar (km/l): " << konsumsibahanbakar << endl;
    cout << "Harga bahan bakar (Rp/liter): " << hargaperliter << endl;
    cout << "=================================================================" << endl;
    cout << "total biaya Rp.  "<< fixed << setprecision(1) <<totalbiayabahanbakar<<endl;

    if (efisiensibahanbakar>15)
    {
        cout<<"efisien";
    }else if (efisiensibahanbakar<10)
    {
        cout<<"boros";
    }else if (efisiensibahanbakar>=10 && efisiensibahanbakar<=15)
    {
        cout<<"cukup efisien";
    }else {
    cout<<"meledak "<<endl;
    }
    
    
    
    return 0;

}