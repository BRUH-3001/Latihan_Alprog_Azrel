/*
Nama Program : Undian Arisan
Nama         : Azrel Sakhi Reswara
NPM          : 140810250098
Tanggal Buat : 11 September 2025
Deskripsi    : Menginput angka yang didapatkan untuk menentukan pemenang arisan
*/

#include "iostream"

using namespace std;

int main(){
    int a, b;
    
    cout <<"Masukkan angka yang ingin diinputkan: ";
    cin >> a;
    cout <<"Masukkan berapa banyak orang yang dipilih: ";
    cin >> b; 

    float odd = a % 2 != 0;
    float even = a % 2 == 0;

    if(a = odd){
        if(b >= 5){
            cout <<"Selamat, kalian mendapatkan uang senilai Rp 4.000.000";
        }else if(b < 4){
            cout <<"Selamat, kalian mendapatkan uang senilai Rp 3.000.000";
        }
    }else if(a = even){
        if(b >= 5){
            cout <<"Selamat, kalian mendapatkan emas dengan berat 100 gram";
        }else if(b < 4){
            cout <<"Selamat, kalian mendapatkan emas dengan berat 50 gram";
        }
    }
}