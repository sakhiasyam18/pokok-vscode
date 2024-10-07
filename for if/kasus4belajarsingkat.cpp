#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
    double nominal,hasilsetelahkonversi;
    string matauang;
    
    cout<<"masukan nominal rupiah nya";
    cin>>nominal;
    cout<<"masukan yang ingin di konversi ke dalam mata uang lain";
    cin>>matauang;

    if (matauang=="dolar"){
        hasilsetelahkonversi= nominal / 15000;
    }else if (matauang=="euro"){
        hasilsetelahkonversi=nominal/16000;
    }else if (matauang=="cina"){
        hasilsetelahkonversi= nominal/110;
    }else 
    {
        cout<<"konversi yang anda pilih tidak ada di data";
    }
    
    cout<<"rupiah anda "<< fixed << setprecision(0) <<nominal<<endl;
    cout<<"hasil konversi nya" << fixed << setprecision(0) << hasilsetelahkonversi << endl;
    return 0;


}