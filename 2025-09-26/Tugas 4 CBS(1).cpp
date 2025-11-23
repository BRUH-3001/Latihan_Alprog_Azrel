/*
Nama Program : Break dan Continue
Nama         : Azrel Sakhi Reswara 
NPM          : 140810250098
Tanggal Buat : 24 September 2025
Deskripsi    : Mencetak break dan continue menggunakan looping
*/

#include <iostream>

using namespace std;

int main(){ 

    for (int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            continue;
        }else if(i % 9 == 0){
            break;
        }
        cout << i << endl;
    }
        
}