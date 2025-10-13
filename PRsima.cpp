/*
Nama Program: Perhitungan Prisma
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 22 September 2025
Deskripsi: Melakukan perhitungan luas permukaan dan volume prisma
*/

#include <iostream>

using namespace std;

void inputData(float a, float b, float T){
    cout <<"Masukkan angka alas permukaan dan segitiga: ";
    cin >> a;
    cin >> b;
}

int hitungLP(float a, float b, float T){
    return 0.5 * a * b;
}

void TampilkanLP(float LP){
    cout <<"Luas permukaan adalah" << LP << endl;
}

void inputVLM(float LP, float T){
    cout <<"Masukkan angka Luas Permukaan dan Tinggi Prisma ";
    cin >> LP;
    cin >> T;
}

int hitungVLM(float LP, float T){
    return LP * T;
}

void TampilkanVLM(float volume){
    cout <<"Volume prisma adalah " << volume << endl;
} 

int main(){
     inputData(2, 3, 6);
}