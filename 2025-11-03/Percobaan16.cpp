/*
Nama Program: Penulisan Kop Surat Sederhana
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 3 November 2025
Deskripsi: Menuliskan kop surat menggunakan fungsi record
*/

#include <iostream>

using namespace std;

struct KopSurat{
    string NamaPenerima;
    string NamaPengirim;
    string NoTelepom;
};

KopSurat inputdata(){
    KopSurat temp;
    cout << "Masukkan nama penerima: ";
    getline(cin, temp.NamaPenerima);
    cout << "Masukkan nama pengirim: ";
    getline(cin, temp.NamaPengirim);
    cout << "Masukkan nomor telepon penerima yang dapat dihubungi: ";
    cin.ignore();
    cin >> temp.NoTelepom;
    return temp;
}

void Tampil(const KopSurat &surat){
    cout << "\nNama Penerima: " << surat.NamaPenerima;
    cout << "\nNama Pengirim: " << surat.NamaPengirim;
    cout << "\nNomor Telepon: " << surat.NoTelepom;
}

int main(){
    KopSurat surat = inputdata();
    Tampil(surat);
}