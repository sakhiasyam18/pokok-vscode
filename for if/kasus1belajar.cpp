#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
    string nama, posisi;
    int jamkerja, gajitotal;
    int tarif = 0;

    cout<<"masukan nama karyawan ";
    getline(cin, nama);
    cout<<"jumlah jam kerja karyawan ";
    cin>>jamkerja;
    cin.ignore();
    cout<<"masukan posisi";
    getline(cin, posisi);

    //mulai if 

    if (posisi == "karyawan magang"){
        tarif = 5000;
    } else if (posisi == "staf junior"){
        tarif = 75000;
    } else if (posisi == "staf senior"){
        tarif = 10000;
    } else if (posisi == "team leader"){
        tarif = 12500;
    } else if (posisi == "kepala departemen"){
        tarif = 15000;
    } else {
        cout<<"jabtan yang kamu masukan salah dan erorr "<<endl;
        return 0;
    }
    
    gajitotal=(tarif*jamkerja);

    cout <<setw(15)<<left<<"nama karyawan "
    <<setw(10)<<right<<"Jam kerja"
    <<setw(15)<<right<<"posisi"
    <<setw(15)<<right<<"total biaya"<<endl;

    cout <<setw(15)<<left<<nama
    <<setw(10)<<right<<jamkerja
    <<setw(15)<<right<<posisi
    <<setw(15)<<right<<tarif
    <<setw(15)<<right<<gajitotal<<endl;

    return 0;
        
    

}
