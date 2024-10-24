#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

float calculateAverage(int arr[], int size) {
    if (size == 0) return 0;
    return (float)sumArray(arr, size) / size;
}

int main() {
    int grades[4] = {80, 90, 70, 100};
    cout << "Rata-rata nilai: " << calculateAverage(grades, 4) << endl;
    return 0;
}
