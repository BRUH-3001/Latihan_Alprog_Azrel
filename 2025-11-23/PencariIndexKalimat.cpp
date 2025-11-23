/*
Nama Program : Pencari Index Huruf
Nama         : Azrel Sakhi Reswara
NPM          : 140810250098
Tanggal Buat : 23 November 2025
Deskripsi    : Latihan Pointer
*/

#include <iostream>

using namespace std;

void findIndex(const string &kata, char c){
    const char *ptr = kata.c_str();
    int index = 0;
    bool found = false;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            cout << index + 1 << " ";
            found = true;
        }
        ++index;
        ++ptr;
    }

    if (found)
    {
        cout << -1;
    }
    

}

int main(){
    string kata;
    char c;

    getline(cin, kata);
    cin >> c;

    findIndex(kata, c);
}