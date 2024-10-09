#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    const int N = 5;
    double numbers[N], varians = 0.0, rata_rata = 0.0, simpanganbaku;

    cout << "masukan 5 angka data " << endl;
    for (int angkayangandamasukan = 0; angkayangandamasukan < N; angkayangandamasukan++){
        cin>>numbers [angkayangandamasukan];
        rata_rata +=numbers [angkayangandamasukan];

    }

    rata_rata /= N ; 

    for (int angkayangandamasukan = 0; angkayangandamasukan < N; angkayangandamasukan++){
        varians +=pow(numbers[angkayangandamasukan] - rata_rata , 2) ;

    }
    varians /= N;

    simpanganbaku = sqrt(varians);
    
    cout << "hasil penghitungan nya " << endl;
    cout << "ini rata - rata anda " << rata_rata << endl;
    cout << "ini Varians anda " << varians << endl;
    cout << "simpangan baku anda " << simpanganbaku << endl;

    if (simpanganbaku <=2){
        cout << "varians anda rendah " << endl;
    }else cout << "varians anda tinggi " << endl;
    
    return 0;
    
}