#include <iostream>
using namespace std;

int countDigits (int n) {
    if (n == 0) return 0;  // Mengembalikan 0 ketika n = 0
    return 1 + countDigits(n / 10);
}

int main () {
    int number = 12345;
    cout << "jumlah digit : " << countDigits(number) << endl;
}
