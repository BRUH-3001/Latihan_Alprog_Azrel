/*
Nama Program: Program Kasir Sederhana
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 24 September 2025
Deskripsi: Membuat kasir sederhana untuk Aviari Cafe
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int PemilihanMenu(){
    int Pemilihan, Jumlah, Total = 0;
    char ulang;

    do
    {
        cout << "===== MENU MAKANAN =====" << endl;
        cout << "1. Nasi Goreng   - Rp 15.000" << endl;
        cout << "2. Nasi Kornet      - Rp 12.000" << endl;
        cout << "3. Double Espresso     - Rp 10.000" << endl;
        cout << "4. Teh Tarik         - Rp 13.000" << endl;
        cout << "=========================" << endl;

        cout << "Pilih menu (1-4): ";
        cin >> Pemilihan;
        cout << "Jumlah porsi: ";
        cin >> Jumlah;

        switch(Pemilihan){
            case 1: Total += 15000 * Jumlah; break;
            case 2: Total += 12000 * Jumlah; break;
            case 3: Total += 10000 * Jumlah; break;
            case 4: Total += 13000 * Jumlah; break;
        }

        cout <<"Apakah anda ingin mengulang pesanan?(Y/N): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    return Total;
}

void PembayaranMenu(string Nama, int Total){
    int bayar; 

    cout << "========STRUK BELANJA========" << endl;
    cout <<  "Nama Pembeli : " << Nama << endl;
    cout << "Total Bayar  : Rp. " << Total << endl;

    cout << "Uang Dibayar : Rp. ";
    cin >> bayar;

    if(bayar >= Total){
        int kembalian = bayar - Total;
        cout << fixed << setprecision (2) <<"Pesanan berhasil terbayarkan" << endl;
        cout << fixed << setprecision (2) <<"Kembalian: " << kembalian << endl;
    }else if( bayar < Total){
        cout <<"Maaf, uang yang dimasukkan tidak cukup! Pesanan dibatalkan";
    }
}

int main(){
    string Pembeli;
    int Total;

    cout << "========== Aviari Cafe Cashier ==========" << endl;
    cout << "Nama Pembeli: ";
    cin >> Pembeli;

    Total = PemilihanMenu();
    PembayaranMenu(Pembeli, Total);

    return 0;
}