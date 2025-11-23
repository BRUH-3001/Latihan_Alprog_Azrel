/*
Nama Program : Latihan file pointer sederhana
Nama         : Azrel Sakhi Reswara
NPM          : 140810250098
Tanggal Buat : 18 November 2025
Deskripsi    : Latihan file operation sederhana
*/

#include <fstream>
#include <iostream>
using namespace std;

int main () {
    string quote;
    getline(cin, quote);

    fstream file ("filebaca.txt", ios::in | ios::out | ios::app );
    if(!file.is_open()) cerr << "err: file not found";

    file << "\"" << quote << "\"\n";
    file.flush();
    file.seekp(0);

    string output;
    while(getline(file, output)){
        cout << output << " ";
    }

    int count = 0;
    char ch;
    file.clear();
    file.seekg(0);

    while(file.get(ch)){
        if( ch == '"' )
        count++;
    }

    file.close();
    
    cout << "\n" << count;

    return 0;

}