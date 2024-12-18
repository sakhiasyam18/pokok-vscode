#include <iostream>
using namespace std;

int liniersearch(int arr[], int n, int target, int index = 0) {
    if (index >=n) return -1;
    if (arr[index] == target) return index ;
    return liniersearch(arr, n, target, index + 1);
}

int main (){
    int arr[] = {10, 20,30};
    int target = 30 ;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = liniersearch (arr, n, target);
    if (result != -1 )
    cout << "Element ditemukan pada indeks"<< result<< endl;
    else
    cout << "Element tidak ditemukan"<< endl;
    return 0;
}