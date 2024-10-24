#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int evenCount = 0, oddCount = 0;

    countEvenOdd(arr, 8, evenCount, oddCount);

    cout << "Jumlah bilangan genap: " << evenCount << endl;
    cout << "Jumlah bilangan ganjil: " << oddCount << endl;

    return 0;
}
