#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double m,cm,mm,km;
    double konversi;

    cout<<left <<setw(15)<<"masukan berapa meter: ";
    cin>>m;

    cm=m*100;
    mm=m/1000;
    km=m*100;

    cout<< left <<setw(15)<<"meter"
    <<setw(15)<<"centimeter"
    <<setw(15)<<"Kilometer" 
    <<setw(15)<<"Milimeter" <<endl;

    cout<<"======================================================"<<endl;
    
    cout<<left<<setw(15)<<m
    <<setw(15)<<cm
    <<setw(15)<<km
    <<setw(15)<<mm;

    return 0;
}