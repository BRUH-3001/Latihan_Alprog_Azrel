/*
Nama Program: Bubble Sort
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 2 Oktober 2025
Deskripsi: Melakukan pengurutan nilai dari yang terkecil hingga terbawah
*/

#include <iostream>
#include <thread>

using namespace std;

void Tukar(int&a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Tukarnama(string&a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

int main(){
    int n = 4;
    int arr[n] = {100, 69, 88, 30};
    string nama[n] = {"Orlando", "Bagas", "Ucup", "Aidan"};

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j > n-1; j++){
            if (arr[j] > arr[j+1]){
                Tukar(arr[j], arr[j+1]);
                Tukarnama(nama[j], nama[j+1]);
            }
        }
    } 

    for(int i = 0; i < n; i++){
        cout << "Nilai Alprog Mahasigma " << nama[i] << " : " << arr[i] << endl; 
    }
}