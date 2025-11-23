/*
Nama Program: Pengganti Pembacaan huruf C
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 6 November 2025
Deskripsi: Mengganti pembacaan huruf sesuai pembacaan Inggris
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, temp;

    cin >> n;

    string nama[n];
    for(int i = 0; i < n; i++){
        cin >> nama[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nama[i].size(); j++) {
            int temp = j + 1;
            if (nama[i][j] == 'c' || nama[i][j] == 'C') {
                if (j == nama[i].size() - 1)
                    nama[i][j] = 'k';
                else if (nama[i][temp] == 'a' ||
                         nama[i][temp] == 'u' ||
                         nama[i][temp] == 'o')
                    nama[i][j] = 'k';
                else if (nama[i][temp] == 'h') {
                    nama[i][temp] = 'c';
                    j++;
                }
                else if (nama[i][temp] == 'e' || nama[i][temp] == 'i' ||
                         nama[i][temp] == 'y')
                    nama[i][j] = 's';
                else
                    nama[i][j] = 'k';
            }
            cout << nama[i][j];
        }
        cout << endl;
    }
    return 0;
}