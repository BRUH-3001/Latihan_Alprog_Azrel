/*
Nama Program: Perhitungan Kerucut
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 28 Agustus 2025
Deskripsi: Menghitung luas(selimut dan permukaan) dan volume kerucut
*/

#include "iostream"
#include "iomanip"

using namespace std;

int main(){
    float S;
    float T;
    float r;
    const double PI = 3.14;
    double result = 1.0/3.0;

    cout << "Silahkan masukkan angka garis pelukis(S): ";
    cin >> S;
    cout << "Silahkan masukkan tinggi kerucut (T): ";
    cin >> T;
    cout << "Silahkan masukkan radius / jari-jari alas (r): ";
    cin >> r; 

    float Hasil1 = PI * r * S;
    cout << fixed << setprecision (2) << "Luas selimut kerucut adalah " << Hasil1;
    cout <<"\n";
    float Hasil2 = (PI * r * r) + ( PI * r * S);
    cout << fixed << setprecision (2) << "Luas permukaan kerucut adalah " << Hasil2;
    cout <<"\n";
    float Hasil3 = 1.0/3.0 * PI * r * r * T;
    cout << fixed << setprecision (2) << "Volume kerucut adalah " << Hasil3;

    return 0;
}