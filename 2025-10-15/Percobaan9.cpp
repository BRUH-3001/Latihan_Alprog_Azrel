/*
Nama Program: Pembuatan pola
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 15 Oktober 2025
Deskripsi: Membuat pola bintang semi-kompleks
*/

#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == i || j == N-i+1) {
                // jika baris atau kolom saat ini adalah yang pertama atau terakhir, cetak bintang
                cout << "*";
            }else{
                // selain itu, cetak titik
                cout << ".";
            }
        }
        cout << endl;
    }
}