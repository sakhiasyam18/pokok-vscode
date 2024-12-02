#include <iostream>
#include <string>
using namespace std;

float hitungTotal(float* nilai, int jumlahMahasiswa){
    if(jumlahMahasiswa <= 0){
        return 0;
    }
    return nilai[jumlahMahasiswa - 1] + hitungTotal(nilai, jumlahMahasiswa - 1);
}

float hitungRataRata(float* nilai, int jumlahMahasiswa){
if (jumlahMahasiswa <= 0){
    return 0;
}
float total = hitungTotal(nilai, jumlahMahasiswa);
return total/jumlahMahasiswa;
}

void nilaiTertinggiTerendah(float* nilai, string* nama, int jumlahMahasiswa, float& nilaiTertinggi, string& namaTertinggi, float& nilaiTerendah, string& namaTerendah) {
    nilaiTertinggi = nilai[0];
    namaTertinggi = nama[0];
    nilaiTerendah = nilai[0];
    namaTerendah = nama[0];

    for (int i = 1; i < jumlahMahasiswa; i++) {
        if (nilai[i] > nilaiTertinggi) {
            nilaiTertinggi = nilai[i];
            namaTertinggi = nama[i];
        }
        if (nilai[i] < nilaiTerendah) {
            nilaiTerendah = nilai[i];
            namaTerendah = nama[i];
        }
    }
}

int main(){
    int jumlahMahasiswa;

    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> jumlahMahasiswa;

    if(jumlahMahasiswa <=0){
        cout << "Jumlah Mahasiswa Harus Lebih dari 0";
        return 0;
    }
    float* nilai = new float[jumlahMahasiswa];
    string* nama = new string[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++){
        cout << "Masukkan Nama Mahasiswa ke-" << (i + 1) << ": ";
        cin >> nama[i];
        cout << "Masukkan Nilai Mahasiswa ke-" << (i + 1) << ": ";
        cin >> nilai[i];

    }

    float rataRata = hitungRataRata(nilai, jumlahMahasiswa);

    float nilaiTertinggi, nilaiTerendah;
    string namaTertinggi, namaTerendah;
    nilaiTertinggiTerendah(nilai, nama, jumlahMahasiswa, nilaiTertinggi, namaTertinggi, nilaiTerendah, namaTerendah);

    cout << "Rata-rata Nilai Mahasiswa : " << rataRata << endl;
    cout << "Nilai Tertinggi : " << nilaiTertinggi << " (oleh  " << namaTertinggi << ")" << endl;
    cout << "Nilai Terendah : " << nilaiTerendah << " (oleh " << namaTerendah << ")" << endl;
    
    delete[] nama;
    delete[] nilai;

    return 0;
}