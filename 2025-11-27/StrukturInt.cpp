#include <iostream>

using namespace std;

int hitungLuas(int panjang, int lebar) { 
    return panjang * lebar; 
}

int main(){
    int panjang, lebar;

    cin >> panjang;
    cin >> lebar;

    float hasil = hitungLuas(panjang, lebar);

    cout << hasil << endl;
}
