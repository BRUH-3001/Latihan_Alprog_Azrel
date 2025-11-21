#include <bits/stdc++.h>

using namespace std;

struct input{
    string namaPembalap;
    int nomorMobil;
    double hasilFinish;
};

const int Maks = 20;
int jumlahData = 0;
input *daftarPembalap = new input[Maks];

void muatFile(){
    ifstream file("daftarpembalap.txt");
    if (!file.is_open()) return;
    while (file >> ws && !file.eof()) {
        getline(file, daftarPembalap[jumlahData].namaPembalap);
        file >> daftarPembalap[jumlahData].nomorMobil;
        file >> daftarPembalap[jumlahData].hasilFinish;
        file.ignore(); 
        jumlahData++;
        if (jumlahData >= Maks) break;
    }
    file.close();
}

void simpanFile(){
    ofstream file("daftarpembalap.txt", ios::trunc);
    for (int i = 0; i < jumlahData; i++) {
        file << daftarPembalap[i].namaPembalap << endl;
        file << daftarPembalap[i].nomorMobil << endl;
        file << daftarPembalap[i].hasilFinish << endl;
    }
    file.close();
}

void tambahData(){
    if (jumlahData >= Maks) {
        cout << "Kapasitas penuh! Tidak bisa menambah data baru.\n";
        return;
    }
    cin.ignore();
    cout << "Masukkan nama pembalap : \n";
    getline(cin, daftarPembalap[jumlahData].namaPembalap);
    cout << "Masukkan nomor mobil   : \n";
    cin >> daftarPembalap[jumlahData].nomorMobil;
    cout << "Masukkan waktu finish  : \n";
    cin >> daftarPembalap[jumlahData].hasilFinish;

    jumlahData++;
    simpanFile();
    cout << "Data pembalap berhasil ditambahkan!\n";
}

void tampilkanData(){
    if (jumlahData == 0) {
        cout << "Belum ada data pembalap.\n";
        return;
    }
    cout << "\n=== Daftar Pembalap ===\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << i + 1 << ". " << daftarPembalap[i].namaPembalap
             << " | Nomor: " << daftarPembalap[i].nomorMobil
             << " | Waktu: " << daftarPembalap[i].hasilFinish << endl;
    }
}

void MainMenu(){
    muatFile();
    int Pilih;
    do{
        cout << "============================" << endl;
        cout << "1. Tambah Pembalap Baru\n" << endl;
        cout << "2. Tampilkan Semua Pembalap\n" << endl;
        cout << "3. Keluar\n" << endl;
        cout << "============================" << endl;

        cin >> Pilih;

        switch (Pilih)
        {
            case 1: tambahData(); break;
            case 2: tampilkanData(); break;
            case 3: cout << "Program Selesai \n"; break;
        }
    } while (Pilih != 3);

    delete[] daftarPembalap; 
}


int main(){
    MainMenu();
    return 0;
}