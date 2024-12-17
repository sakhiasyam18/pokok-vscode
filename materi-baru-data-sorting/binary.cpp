#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> readCSV(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: File tidak dapat dibuka!" << endl;
        exit(1);
    }

    vector<int> data;
    int value;
    while (file >> value) {
        data.push_back(value);
    }

    file.close();
    return data;0;
}

int binarySearch(const vector<int>& data, int target) {
    int low = 0, high = data.size() - 1;
    int steps = 0;

    while (low <= high) {
        steps ++;
        int mid = low + (high - low) / 2;

        cout << "step ke- " << steps << endl;
        cout << "batas bawah adalah indeks : " << low << endl;
        cout << "batas atas adalah indeks : " << high << endl;
        cout << "indeks tengah dari batas atas dan bawah : " << mid << endl;
        cout << "Membandingkan " << target << " dengan nilai indeks tengah : "
        << data[mid] << endl << endl;

        if (data[mid] == target) {
            return mid;
        } else if (data[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    string filename = "bilangan_prima_per_line.csv";
    vector<int> data = readCSV(filename);

    cout << "\n === DATA BILANGAN PRIMA ANTARA 0 SAMPAI 550 === " << endl;
    cout << "\nData bilangan prima:\n" << endl;
    for (size_t i = 0; i < data.size(); ++i) {
        cout << data[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    int target;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    int result = binarySearch(data, target);
    if (result != -1) {
        cout << "Angka ditemukan pada indeks: " << result << endl;
        cout << "Nilai " << data[result] << " merupakan bilangan prima\n"<< endl;
    } else {
        cout << "Angka yang anda masukkan bukan merupakan bilangan prima" << endl;
    }

    return 0;
}

