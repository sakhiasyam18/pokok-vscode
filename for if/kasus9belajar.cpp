#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string konveri;

    cout<<"masukan anda memilih mm, cm, atau km "<<endl;
    cin>> konveri;
    cout<<"anda memilih " + konveri<<endl;

    for (double meter = 1; meter <=10 ; ++meter)if (konveri == "mm"){
        cout<<meter * 100<<endl;
    }else if (konveri == "cm"){
        cout<<meter * 1000<<endl;
    }else if (konveri == "km"){
        cout<<meter / 1000<<endl;
    }else{cout<<"yang anda masukan tidak ada di data";break;}

    return 0;

}