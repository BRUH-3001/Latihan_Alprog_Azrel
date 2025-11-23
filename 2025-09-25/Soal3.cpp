/*
Nama Program: A
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 25 September 2025
Deskripsi: Membuat A
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int Tinggi = 2 * n + 3;       
    int Lebar = 2 * n + 3;        
    int Pertengahan = Tinggi / 2;         

    for (int i = 0; i < Tinggi; i++) {
        for (int j = 0; j < Lebar; j++) {
            
            if (j == (Lebar / 2 - i) && i < Pertengahan)
                cout << "A";
            else if (j == (Lebar / 2 + i) && i < Pertengahan)
                cout << "A";
            else if (i == Pertengahan && j >= (Lebar / 2 - i) && j <= (Lebar / 2 + i))
                cout << "A";
            else if (i > Pertengahan && j == (Lebar / 2 - Pertengahan))
                cout << "A";
            else if (i > Pertengahan && j == (Lebar / 2 + Pertengahan))
                cout << "A";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
