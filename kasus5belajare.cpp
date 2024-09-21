#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float t,b,bmi;
    
    cout<<"masukan berat anda: ";
    cin>>b;
    cout<<"masukan tinggi anda: ";
    cin>>t;


    bmi = b / (t*t);
    
    if(bmi>=18.5&&bmi<=24.9){
        cout<<"berat anda normal";
    } else {
        cout<<"berat badan gememukan" << endl;
    }

    return 0;
}