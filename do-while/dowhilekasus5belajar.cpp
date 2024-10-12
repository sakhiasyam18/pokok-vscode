#include <iostream>
#include <string>

using namespace std;

int main () {
    string kategoripengeluaran;
    int jumlahpengeluaran = 0, totalpengeluaranmakanan = 0, totalpengeluarankendaraan = 0, totalpengeluarangiburan = 0, totalpengeluaranlainya = 0, totalpengeluaranselamaseminggu;
    char lanjut;

    do
    {
        for (int i = 1; i <=7; i++)
        {
        cout << "masukan kategori pengeluaran hari ke- " <<i<< "(makanan/kendaraan/hiburan/lain lain) ";
        cin >> kategoripengeluaran;
        cout << "masukan jumlah pengeluaran ";
        cin >> jumlahpengeluaran;

        if (kategoripengeluaran == "makanan" || kategoripengeluaran == "Makanan"){
            totalpengeluaranmakanan += jumlahpengeluaran; 
        }else if (kategoripengeluaran == "kendaraan" || kategoripengeluaran == "Kendaraan"){
            totalpengeluarankendaraan += jumlahpengeluaran;
        }else if (kategoripengeluaran == "hiburan"){
            totalpengeluarangiburan += jumlahpengeluaran;
        }else {totalpengeluaranlainya += jumlahpengeluaran;}
        }



        if (kategoripengeluaran == "makanan" || kategoripengeluaran == "Makanan"){
            totalpengeluaranmakanan += jumlahpengeluaran; 
        }else if (kategoripengeluaran == "kendaraan" || kategoripengeluaran == "Kendaraan"){
            totalpengeluarankendaraan += jumlahpengeluaran;
        }else if (kategoripengeluaran == "hiburan"){
            totalpengeluarangiburan += jumlahpengeluaran;
        }else {totalpengeluaranlainya += jumlahpengeluaran;}
        
        totalpengeluaranselamaseminggu = totalpengeluarangiburan+totalpengeluarankendaraan+totalpengeluaranlainya+totalpengeluaranmakanan;

        int terbesar = totalpengeluaranmakanan;
        string kategori_terbesar = "makanan";

        if (totalpengeluarangiburan > terbesar){
            terbesar = totalpengeluarangiburan;
            kategori_terbesar = "hiburan";
        } if (totalpengeluarankendaraan>terbesar){
            terbesar = totalpengeluarankendaraan;
            kategori_terbesar = "kendaraan";
        }if (totalpengeluaranlainya > terbesar){
            terbesar = totalpengeluaranlainya;
            kategori_terbesar = "pengeluaran lainya";
        }

        cout << "total pengeluaran makanan " << totalpengeluaranmakanan<< endl;
        cout << "total pengeluaran hiburan " << totalpengeluarangiburan<< endl;
        cout << "total pengeluaran kendaraan " << totalpengeluarankendaraan<< endl;
        cout << "total pengeluaran lainya " << totalpengeluaranlainya<< endl;
        cout << "total pengeluaran selama seminggu " << totalpengeluaranselamaseminggu<< endl;
        cout << "total pengeluaran terbesar adalah " << terbesar<< " pada kategori "<< kategori_terbesar <<endl;

        
        cout << "ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak)";
        cin >> lanjut;

        if (lanjut)
        {
            totalpengeluarangiburan = 0;
            totalpengeluarankendaraan = 0;
            totalpengeluaranlainya = 0;
            totalpengeluaranmakanan = 0;
            totalpengeluaranselamaseminggu = 0;
        }
        
    } while (lanjut == '1');
    return 0;
}