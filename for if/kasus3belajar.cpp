#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main (){
    string bangun;
    float panjang, lebar, tinggi, jarijari, luas,volume;
    const double pi=3.1414159265358979323846;

    cout << "masukan bangun yang ingin kamu pilih";
    cin >> bangun;

    if (bangun == "balok"){
        cout << "masukan panjang balok ";
        cin >> panjang;
        cout << "masukan lebar balok ";
        cin >> lebar;
        cout << "masukan tinggi balok ";
        cin >> tinggi;

        luas = (2*panjang*lebar*tinggi) + (2 * lebar * tinggi) 
        + (2 * tinggi * panjang);

        volume = panjang* lebar*tinggi ;
        cout << "==========================================================================================" << endl;
        cout << setw(20) << "Panjang" 
            << setw(15) << "Tinggi" 
            << setw(15) << "Lebar" 
            << setw(15) << "Volume" 
            << setw(15) << "Luas Permukaan" << endl;
        cout << "==========================================================================================" << endl;
        cout << setw(20) << panjang 
            << setw(15) << lebar 
            << setw(15) << tinggi 
            << setw(15) << luas 
            << setw(15) << volume << endl; 
        return 0;}
    else if (bangun == "kubus"){
        cout<<"masukan panjang kubus nya ";
        cin>>panjang;
        luas=panjang*panjang*panjang;
        volume=panjang*panjang*panjang;

        cout << setw(15) << "Bangun"
            << setw(15) << "Sisi Kubus"
            << setw(15) << "Volume" 
            << setw(20) << "Luas Permukaan" << endl;
        cout << "================================================================" << endl;
        cout<< setw(15) << bangun 
            << setw(15) << panjang
            << setw(15) << luas 
            << setw(20) << volume << endl; 
        return 0;
    }else if (bangun=="kerucut"){
        cout<<"masukan jari jari nya ";
        cin>>jarijari;
        cout<<"masukan tinggi dari kerucut";
        cin>>tinggi;
        luas = (pi * jarijari * (sqrt(jarijari * jarijari + tinggi * tinggi)) + (pi*jarijari*jarijari));
        volume = 0.3333333 * pi * jarijari * jarijari * tinggi;
        cout << "===================================================================================" << endl;
        cout<< setw(15) << "Bangun"
            << setw(15) << "Jari-jari"
            << setw(15) << "Tinggi"
            << setw(15) << "Volume" 
            << setw(20) << "Luas Permukaan" << endl;
        cout << "===================================================================================" << endl;
        cout<< setw(15) << bangun 
            << setw(15) << jarijari
            << setw(15) << tinggi
            << setw(15) << luas 
            << setw(20) << volume << endl; 
        return 0;
    }else if (bangun == "tabung"){
        cout<<"masuukan jari jari nya tabung ";
        cin>>jarijari;
        cout<<"masukan tinggi tabung ";
        cin>>tinggi;
        luas = (2*pi*jarijari * (jarijari*tinggi));
        volume = pi*jarijari*jarijari*tinggi;
            cout << "==========================================================================================" << endl;
        cout<< setw(15) << "Bangun"
            << setw(15) << "Jari-jari"
            << setw(15) << "Tinggi"
            << setw(15) << "Volume" 
            << setw(15) << "Luas Permukaan" << endl;
        cout << "==========================================================================================" << endl;
        cout<< setw(15) << bangun 
            << setw(15) << jarijari
            << setw(15) << tinggi
            << setw(15) << luas 
            << setw(15) << volume << endl; 
        return 0;
    }else{
        cout<<"pilihan yang kamu masukan tidak ada di daftar program ";
    }
    
    
    
    
    
}