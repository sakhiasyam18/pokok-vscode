#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int p, l, t, hpl;
    double harga, biaya, luas, totaliter, totalbiaya;

    cout<<"panjang ruangan : ";
    cin>>p;

    cout<<"lebar ruangan : ";
    cin>>l;

    cout<<"tinggi ruangan : ";
    cin>>t;

    cout<<"harga per liter : ";
    cin>>hpl;

    luas=p*l*t;
    totaliter=luas/10;
    totalbiaya=totaliter*hpl;

    cout<<"======================"<<endl;
    cout<<"Luas dinding : "<<fixed<<setprecision(2) << luas << endl;
    cout<<"Jumlah liter cat yang dibutuhkan : "<< "liter" <<fixed << setprecision(2) << totaliter<<endl;
    cout<<"Total biaya cat yang dibutuhkan : " <<totalbiaya<<fixed<< setprecision(2) <<endl;

    return 0;
    
}