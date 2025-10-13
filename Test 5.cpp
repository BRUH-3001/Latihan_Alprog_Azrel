/*
Nama Program : Penginput nilai
Nama         : Azrel Sakhi Reswara
NPM          : 140810250098
Tanggal Buat : 11 September 2025
Deskripsi    : Mencari letak nilai yang diinginkan
*/

#include "iostream"

using namespace std;

int main(){
    float Nilai;
    cout <<"Masukkan nilai yang ingin diinput: ";
    cin >> Nilai;

    if(Nilai >= 80){
        cout <<"Nilai mutu = A";
    }else if(Nilai < 80, Nilai >= 68){
        cout <<"Nilai mutu = B";
    }else if(Nilai < 68, Nilai >= 56){
        cout <<"Nilai mutu = C";
    }else if(Nilai < 56, Nilai >= 45){
        cout <<"Nilai mutu = D";
    }else if (Nilai < 45){
        cout <<"Nilai mutu = E";
    }else{
        cout <<"Nilai yang dimasukkan error atau tidak dapat diketahui";
    }
    return 0;
}