/*
Nama Program: Perhitungan Faktorial
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 Oktober 2025
Deskripsi: Melakukan perhitungan faktorial
*/

#include <iostream>

using namespace std;

int faktorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n* faktorial(n-1);
    }
}

int main(){
    int c;

    cout <<"Masukkan angka yang ingin difaktorialkan: " << endl;
    cin >> c;

    cout <<"Faktorial dari " << c << " adalah " << faktorial (c) << endl;

    return 0;
}

/*
Waktu pengerjaan: 8 menit
*/