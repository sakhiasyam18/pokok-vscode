#include <iostream>
using namespace std;

int* findMax(int arr[], int size) {
    int *maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}


int main() {
    int arr[] = {3, 5, 2, 9, 6};
    int *max = findMax(arr, 5);
    cout << "Nilai maksimum dalam array adalah: " << *max << endl;
}
