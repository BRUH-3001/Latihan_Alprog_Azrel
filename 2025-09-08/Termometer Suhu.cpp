/*
Nama Program : Termometer Suhu Pasien
Nama         : Azrel Sakhi Reswara
NPM          : 140810250098
Tanggal Buat : 8 September 2025
Deskripsi    : Menghitung suhu pasien secara berkala selama 24 Jam
*/

#include "iostream"

using namespace std;

void HasilKonversi(double &Suhu, double &Fahrenheit, double &Kelvin){
    Fahrenheit = (9.0/5.0 * Suhu) + 32;
    Kelvin = Suhu + 273,15;

    cout << "\n===Hasil Konversi===" << endl;
    cout << Fahrenheit << " F" << endl;
    cout << Kelvin << " K" << endl;
}

int main(){
    double Suhu, Fahrenheit, Kelvin;

    cout << "======Termometer Sederhana======" << endl;
    cout << "Masukkan angka suhu (dalam Celcius): ";
    cin >> Suhu;

    HasilKonversi(Suhu, Fahrenheit, Kelvin);
}