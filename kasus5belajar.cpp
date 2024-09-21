#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double rp, doll, convert;
    

    cout << "Masukan Jumlah Rupiah";
    cin>>rp;
    cout<<"masukan convert";
    cin>>convert;

    doll = rp / convert;

    cout <<"Jumlah Rupiah Rp." <<rp<<endl;
    cout <<"Jumlah Dollar $"<<fixed << setprecision(2) <<doll<<endl;
    return 0;
}
