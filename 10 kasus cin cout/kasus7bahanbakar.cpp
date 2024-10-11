#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double jarak, bahan, harga, total;

    cout<<"Jarak Tempuh: ";
    cin>>jarak;

    cout<<"Konsumsi Bahan Bakar (Km/L) : ";
    cin>>bahan;

    cout<<"Harga Bahan Bakar (Rp/L) : ";
    cin>>harga;

    // Menghitung total biaya perjalanan
    total=(jarak/bahan) * harga;
    
    // Tampilkan hasil dengan format mata uang (2 digit desimal)
    cout<<"================="<<endl;
    cout<<"Total Biaya Bahan Bakar: Rp "<<fixed << setprecision(2) << total << endl;
    return 0;


}