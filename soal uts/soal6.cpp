#include <iostream>
using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[] = "nakam\0";
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    reverseString(str, 0, n-1); // Memperbaiki dengan n-1
    cout << str << endl;

    return 0;
}
