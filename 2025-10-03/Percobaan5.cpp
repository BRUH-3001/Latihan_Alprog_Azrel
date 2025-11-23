/*
Nama Program: Angka Fibonacci
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 Oktober 2025
Deskripsi: Melakukan perhitungan faktorial
*/

#include <iostream>

using namespace std;

int Fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int c;

    cout <<"Masukkan angka yang ingin diinput: " << endl;
    cin >> c;

    int index = 0;

    cout <<"Hasil: \n";
    for(int i = 0; i < c; i++){

        for(int s = 0; s < c-i; s++){
            cout << "  ";
        }
        for(int j = 0; j <= i; j++){
            cout << Fibonacci(index++) << "  ";
        }
        cout << endl;
    }
    return 0;
}

/*
Waktu pengerjaan: 22 menit
*/