#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DataMenu {
    string nama;
    int harga;
};

const int JUMLAH_MENU = 4;
DataMenu daftarMenu[JUMLAH_MENU] = {
    {"Nasi Goreng", 15000},
    {"Mie Ayam",    12000},
    {"Soto Ayam",   10000},
    {"Bakso",       13000}
};

int hitungKembalian(int dibayar, int total) {
    if (dibayar >= total) {
        return dibayar - total;
    } 
    else {
        return -1; 
    }
}


int PemilihanMenu() {
    int Pemilihan, Jumlah, Total = 0;
    char ulang;

    do {
        cout << "===== MENU MAKANAN =====" << endl;

        for (int i = 0; i < JUMLAH_MENU; i++) {
            cout << i + 1 << ". " << left << setw(12) << daftarMenu[i].nama << " - Rp " << daftarMenu[i].harga << endl;
        }
        cout << "=========================" << endl;

        cout << "Pilih menu (1-" << JUMLAH_MENU << "): ";
        cin >> Pemilihan;

        if (Pemilihan >= 1 && Pemilihan <= JUMLAH_MENU) {
            cout << "Jumlah porsi: ";
            cin >> Jumlah;

            Total += daftarMenu[Pemilihan - 1].harga * Jumlah; 
        } else {
            cout << "Pilihan menu tidak valid!" << endl;
        }

        cout << "Apakah anda ingin mengulang pesanan?(Y/N): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    return Total;
}

void PembayaranMenu(string Nama, int Total) {
    int bayar; 

    cout << "========STRUK BELANJA========" << endl;
    cout << "Nama Pembeli : " << Nama << endl;
    cout << "Total Bayar  : Rp. " << Total << endl;

    cout << "Uang Dibayar : Rp. ";
    cin >> bayar;
    
    int kembalian = hitungKembalian(bayar, Total); 

    if (kembalian >= 0) {
        cout << fixed << setprecision (2) << "Pesanan berhasil terbayarkan" << endl;
        cout << fixed << setprecision (2) << "Kembalian: Rp. " << kembalian << endl;
    } else {
        cout << "Maaf, uang yang dimasukkan tidak cukup! Pesanan dibatalkan";
    }
}

int main() {
    string Pembeli;
    int Total;

    cout << "========== Warteg Pak Mamat ==========" << endl;
    cout << "Nama Pembeli: ";
    getline(cin, Pembeli);

    Total = PemilihanMenu(); 
    PembayaranMenu(Pembeli, Total);

    return 0;
}