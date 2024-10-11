#include <iostream>
#include <string>

using namespace std;

int main (){
    int jumlahbarang;
    float *hargabarang, totalharga = 0, diskon = 0, totalhargasetelahdiskon;
    char inginlanjut;
    
    do{
        cout << "masukan jumlah barang yang ingin anda beli " ;
        cin >> jumlahbarang ;

        hargabarang = new float[jumlahbarang];

        for (int i = 0; i < jumlahbarang; i++)
        {
            cout << "masukan harga ke " << i + 1 << ": Rp. ";
            cin >> hargabarang [i] ;
            totalharga += hargabarang[i];

        }
        
        cout << "Total harga: Rp " << totalharga << endl;

        //menampilkan diskon 
        if (totalharga >500000){
            diskon = totalharga * 0.10;
        } else if (totalharga <= 250000){
            diskon = 0.05 * totalharga;
        } else{
            diskon = 0;
        }
        
        totalhargasetelahdiskon = totalharga - diskon;


        cout << "total harga semuanya Rp. " << totalharga << endl;
        cout << "total harga setelah di diskon " << totalhargasetelahdiskon << endl;
        
        //menanyakan apakah masih lagi
        cout << "apakah masih  ada kalau (1 bisa lanjut selain itu selesai)  " << endl;
        cin >> inginlanjut ;
        totalharga = 0;
        delete[]hargabarang;

    } while (inginlanjut == '1');
    
    return 0;


}