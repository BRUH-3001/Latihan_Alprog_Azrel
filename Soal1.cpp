/*
Nama Program: Kalkulator Bunga Majemuk
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 24 September 2025
Deskripsi: Membuat perhitungan bunga majemuk
*/

#include <iostream>
#include <cmath>

using namespace std;

void inputData(int &Modal, int &SB, int &Periode, int &Durasi){
   cin >> Modal >> SB >> Periode >> Durasi;
}

long long PerhitunganBunga(double Modal, double SB, double Periode, double Durasi){
    double base = 1 + (SB / Periode);       
    int exponent = (int)(Periode * Durasi); 
    
    double power = 1.0;
    for(int i = 0; i < exponent; i++){
        power *= base;  
    }

    double A = Modal * power;
    return (long long)round(A);  
}

int main(){
    double Modal, SB, Periode, Durasi;

    cin >> Modal >> SB >> Periode >> Durasi;

    cout << PerhitunganBunga(Modal, SB, Periode, Durasi) << endl;

    return 0;
}