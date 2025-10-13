/*
Nama Program: Pemberian Nilai
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 September 2025
Deskripsi: Melakukan pengecekan nilai dan memberikan label di rentan nilai itu berada
*/

#include "iostream"
#include "iomanip"

using namespace std;

int main(){
    int a;

    cout << "Masukkan nilai: ";
    cin >> a;

    if(a >= 80){
        cout <<"IP saya A";
    } else if( a >= 65 && a <80){
        cout <<"IP saya B";
    } 
        if (a >= 50 && a <64){
        cout <<"IP saya C";
    } 
        if (a <= 49){
        cout <<"IP saya E";
    }

    return 0;
}
