#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

int main () {
    double jumlahBarang, totalharga, totalhargasetelahdiskon, diskon;
    float  *hargabarang;
    char lanjut ;

    do
    {
        totalharga = 0;
        diskon = 0;
        jumlahBarang = 0;
        cout << "masukan jumlah barang: ";
        cin >> jumlahBarang ;
        
        hargabarang = new float [int (jumlahBarang)];
        for (int i = 1; i <= jumlahBarang; i++)
        {
            cout << "masukan harga barang ke- " << i <<": ";
            cin >> hargabarang[i];
            totalharga +=hargabarang[i];
        }

        cout << "Total harga " << totalharga << endl;
        if (totalharga >= 500000){
            diskon = totalharga * 0.1;
        }else if (totalharga > 250000){
            diskon = 0.05;
        }else {diskon = 0;}
        
        totalharga = totalharga - diskon;
        
    
        cout << "Diskon "<< diskon << endl;
        cout << "Harga setelah diskon "<< totalharga << endl;
        cout << "ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu tidak)";
        cin >> lanjut ;
    } while (lanjut == '1');
    
}