#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    double suhu1, suhu2, suhu3, suhu4, suhu5, rataratasuhu;
    cout<<"masukan suhu hari ke 1 ";
    cin>>suhu1;
    cout<<"masukan suhu hari ke 2 ";
    cin>>suhu2;
    cout<<"masukan suhu hari ke 3 ";
    cin>>suhu3;
    cout<<"masukan suhu hari ke 4 ";
    cin>>suhu4;
    cout<<"masukan suhu hari ke 5 ";
    cin>>suhu5;
    
    rataratasuhu = (suhu1+suhu2+suhu3+suhu4+suhu5) / 5;

    cout<<"====================================="<<endl;
    cout<<"suhu hari ke-1 "<<suhu1<<endl;
    cout<<"suhu hari ke-2 "<<suhu1<<endl;
    cout<<"suhu hari ke-3 "<<suhu1<<endl;
    cout<<"suhu hari ke-4 "<<suhu1<<endl;
    cout<<"suhu hari ke-5 "<<suhu1<<endl;

    cout<<"======================================"<<endl;
    cout<<"rata - rata suhu "<<rataratasuhu<<endl;
    if (rataratasuhu>=30)
    {
        cout<<"cuaca panas";
    }else if (rataratasuhu<=20)
    {
        cout<<"cuaca dingin";
    }else if (rataratasuhu>=20 && rataratasuhu<30)
    {
        cout<<"cuaca normal";
    }
    
    return 0;
    
}