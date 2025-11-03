/*
Nama Program: Kalkulator Simpleks
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 21 Oktober 2025
Deskripsi: Membuat kalkulator yang menggunakan switch case dan array
*/

#include <iostream>

using namespace std;

    double hitungTambah (int arr[], int n);
    double hitungKurang (int arr[], int n);
    double hitungKali (int arr[], int n);
    double hitungBagi (int arr[], int n);

void PemilihanMenu(){

    int Pemilihan, menu;

    cout << "=====Kalkulator Simpleks=====" << endl;
    cout << "Silahkan memilih opsi perhitungan" << endl;
    cout << "1. Pertambahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cin >> menu;

    cout << "Masukkan angka yang ingin diinput" << endl;
    cin >> Pemilihan;


    int arr[Pemilihan];
    cout << "Masukkan " << Pemilihan << " angka berikut: ";
    for(int i = 0; i < Pemilihan; i++){
        cin >> arr[i];
    }

    double hasil = 0;

    switch (menu){
        case 1: 
        hasil = hitungTambah(arr, Pemilihan);
        cout << "Hasil: " << hasil << endl;
        break;

        case 2: 
        hasil = hitungKurang(arr, Pemilihan); 
        cout << "Hasil: " << hasil << endl;
        break;

        case 3: 
        hasil = hitungKali(arr, Pemilihan);
        cout << "Hasil: " << hasil << endl; 
        break;

        case 4: 
        hasil = hitungBagi(arr, Pemilihan);
        cout << "Hasil: " << hasil << endl; 
        break;

        default:
        cout << "Pilihan tidak valid!" << endl;
    }

}

double hitungTambah(int arr[], int n){
    int total = arr[0];

    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    return(double) total;
}

double hitungKurang(int arr[], int n){
    int total = arr[0];

    for(int i = 0; i < n; i++){
        total -= arr[i];
    }
    return(double) total;
}

double hitungBagi(int arr[], int n){
    double total = arr[0];

    for(int i = 0; i < n; i++){
        total /= arr[i];
    }
    return(double) total;
}

double hitungKali(int arr[], int n){
    int total = arr[0];

    for(int i = 0; i < n; i++){
        total *= arr[i];
    }
    return(double) total;
}

int main(){
    PemilihanMenu();
    return 0;
}