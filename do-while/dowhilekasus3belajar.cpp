#include <iostream>
#include <string>

using namespace std;

int main () {
    int penggunaanlistrik, totalpenggunaanlistrik = 0, tagihansebelumdiskon = 0, diskon = 0, tagihansetelahdiskon = 0;
    char loop;


    do
    {
        penggunaanlistrik = 0;

        cout << "masukan penggunaan listrik ";
        cin >> penggunaanlistrik;
        if (penggunaanlistrik <=100){
            tagihansebelumdiskon = penggunaanlistrik * 1500;
        }else if (penggunaanlistrik >=101 && penggunaanlistrik <300){
            tagihansebelumdiskon = penggunaanlistrik * 2000;
        }else if (penggunaanlistrik >300){
            tagihansebelumdiskon = penggunaanlistrik * 3000;
        }

        if (tagihansebelumdiskon  > 1000000)
        {
            diskon = tagihansebelumdiskon * 0.1;
        }else diskon = 0;

        tagihansetelahdiskon = tagihansebelumdiskon - diskon;

        cout << "total penggunaan listrik "<< penggunaanlistrik <<endl;
        cout << "total tagihan sebelum diskon: " << tagihansebelumdiskon << endl;
        cout << "diskon: " << diskon << endl;
        cout << "total tagihan setelah diskon: " << tagihansetelahdiskon << endl;
        cout << "ingin menghitung tagihan untuk pengguna lain? (1 untuk ya, selain itu tidak dan selesai)";
        cin >> loop;
        
    } while (loop == '1');
    
}