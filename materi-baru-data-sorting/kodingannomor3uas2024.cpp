#include <iostream>
using namespace std;
struct person
{
    string name;
    int age;
};

void inputpersoninfo(person& p){
    cout << "Enter name: ";
    // cin >> p.name; 
    getline(cin, p.name);
    cout << "Enter age: ";
    cin >> p.age;
}

int main (){
    person p;
    inputpersoninfo(p);

    cout << "Name: " << p.name << "Umur: "<< p.age << endl;
    return 0;
}