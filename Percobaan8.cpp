/*
Nama Program: Membuat deret
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 Oktober 2025
Deskripsi: Melakukan perhitungan deret
*/

#include <iostream>

using namespace std;

int JumlahDeret(int n){
    if(n == 0){
        return 1;
    }else{
        return n + JumlahDeret(n-1);
    }
}

int main(){
    int c;

    cout <<"Masukkan angka yang ingin diinput: ";
    cin >> c;

    cout <<"Hasil dari " << c << " adalah " << JumlahDeret(c) <<endl;

    return 0;
}

/*
Waktu pengerjaan: 12 menit
*/