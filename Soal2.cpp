/*
Nama Program: Armstrong Number
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 24 September 2025
Deskripsi: Mengecek angka input apakah angka Armstrong atau bukan
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;      
        sum += digit * digit * digit; 
        n /= 10;                 
    }

    if (sum == original) {
        cout << original << " adalah Armstrong Number" << endl;
    } else {
        cout << original << " bukan Armstrong Number" << endl;
    }

    return 0;
}
