/*
Nama Program: Segitiga Pascal
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 Oktober 2025
Deskripsi: Membuat segitiga Pascal
*/

#include <iostream>

using namespace std;

int Pascal(int baris, int kolom){
    if(kolom == 0 || kolom == baris);
    return Pascal(baris-1, kolom-1) + Pascal(baris -1, kolom);
}

int main(){
    int c;

    cout <<"Masukkan angka untuk diubah: " << endl;
    cin >> c;

    for(int i = 0; i < c; i++){

        for(int s = 0; s < c-1; s++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << "Hasil :";
            cout << Pascal(1,1) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Waktu pengerjaan: 10 menit
*/