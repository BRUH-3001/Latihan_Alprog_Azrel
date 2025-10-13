/*
Nama Program: Perhitungan Pangkat
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 Oktober 2025
Deskripsi: Melakukan perhitungan Pangkat
*/

#include <iostream>

using namespace std;

int Pangkat(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * Pangkat(a, b-1);
    }
}

int main(){
    int c, d;

    cout <<"Masukkan angka yang ingin dipangkatkan: ";
    cin >> c;
    cout <<"Masukkan angka yang menjadi basis pangkat: ";
    cin >> d;

    cout <<"Hasil dari " << c <<" adalah " << Pangkat(c, d) <<endl;
}

/*
Waktu pengerjaan: 15 menit
*/